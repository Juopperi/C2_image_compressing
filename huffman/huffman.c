#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "huffman.h"

void heapConstruct(int arr, node *currentNode){
    while(currentNode->next != NULL){
        if(currentNode->c == arr){
            currentNode->freq = currentNode->freq+1;
            return;
        }
        currentNode = currentNode->next;
    } 
    if(currentNode->c == arr){
        currentNode->freq = currentNode->freq+1;
        return;
    }

    node *newNode = malloc(sizeof(struct node));
    currentNode->next = newNode;

    newNode->c = arr;
    newNode->freq = 1;
    newNode->prev = currentNode;
    newNode->next = NULL;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = NULL;
}

int insertBranch(node *start, node *insert){
    while(start->next != NULL){
        if(insert->freq >= start->freq && start->next->freq > insert->freq){       
            insert->next = start->next;
            insert->prev = start->prev;
            start->next = insert;
            return 0;
        } else if(insert->freq > start->next->freq && start->next->next == NULL){
            start->next->next=insert;
            return 0;
        } 
        start = start->next;
    }
}

void printHeap(node *start){ //Mostly for debugging
    while(start != NULL){
        printf("%d %d\n",start->c,start->freq);
        start = start->next;
    } 
    printf("\n");
}

struct node* createBranch(node *first, node *second){ //Creates the branch of the two least frequent items 
    node *newBranch = malloc(sizeof(struct node));

    first->parent = newBranch;
    second->parent = newBranch;
    
    newBranch->freq=first->freq+second->freq;
    newBranch->c=first->c+second->c; 
    newBranch->left = first;
    newBranch->right = second;
    
    newBranch->next = NULL;
    newBranch->prev = NULL;
 
    if(second->next != NULL){
        first->prev->next = second->next;
        second->next->prev = first->prev;
    } else {
        first->prev->next = newBranch;
    }
  
    first->next=NULL;
    first->prev=NULL;
    second->next=NULL;
    second->prev=NULL;
  
    return newBranch;
}

void printTree( struct node *root, int level ) //Mostly for debugging 
{
  if ( root == NULL ) {
    for (int i = 0; i < level; i++ )
        printf("       "); //Just tried different amounts until something looked good 
    printf("\n");
  }
  else {
    printTree(root->right, level + 1 );
    for (int i = 0; i < level; i++ )
        printf("       ");
    printf ( "%d %d", root->c ,root->freq);
    printTree(root->left, level + 1 );
  }
}

void* addChar(char *s, char c) {
    int l = strlen(s);  
    s[l] = c;
    s[l + 1] = '\0';
}

void createEncoding(struct node *root, struct coding *start, char encoding[]){
    if(root->right==NULL || root->left==NULL){
        //printf("%d %s\n",root->c,encoding); //For debugging 
        start->c[start->index] = root->c;
        strcpy(start->code[start->index],encoding);
        start->index++;
    } else {
    char leftEncoding[20]; //Should be a better way of doing this but i'm not sure how. 
    char rightEncoding[20];
    strcpy(leftEncoding,encoding);
    strcpy(rightEncoding,encoding);
    addChar(leftEncoding,'1');
    addChar(rightEncoding,'0');
   
    createEncoding(root->right,start,rightEncoding);
    createEncoding(root->left,start,leftEncoding);
    }
}

struct node* bubbleSort(struct node* head) {
    if (head == NULL) return head;
    int swapped;
    struct node* last = NULL;
    do {
        swapped = 0;
        struct node* curr = head;
        while (curr->next != last) {
            if (curr->freq >= curr->next->freq) {
                struct node* nextNode = curr->next;

                if (curr->prev == NULL) {
                    head = nextNode;
                } 
                else {
                    curr->prev->next = nextNode;
                }

                if (nextNode->next != NULL) {
                    nextNode->next->prev = curr;
                }

                curr->next = nextNode->next;
                nextNode->prev = curr->prev;
                nextNode->next = curr;
                curr->prev = nextNode;
                swapped = 1;
            } 
            else {
                curr = curr->next;
            }
        }
        last = curr;
    } while (swapped);
    return head;
}
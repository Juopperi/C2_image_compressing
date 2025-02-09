#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct node {
    char c;
    int freq;
    struct node *prev;
    struct node *next;
    struct node *left;
    struct node *right;
    struct node *parent;
};
typedef struct node node;

void heapConstruct(char arr, int freq, node *currentNode){
    while(currentNode->next != NULL){
        currentNode = currentNode->next;
    }
    node *newNode = malloc(sizeof(struct node));
    currentNode->next = newNode;

    newNode->c = arr;
    newNode->freq = freq;
    newNode->prev = currentNode;
    newNode->next = NULL;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = NULL;
}

int insertBranch(node *start, node *insert){
    while(start->next != NULL){
        if(insert->freq >= start->freq && start->next->freq >= insert->freq){ //Check so the inserted value is between these two values
            insert->next = start->next;
            insert->prev = start->prev;
            start->next = insert;
            return 0;
        }
        start = start->next;
    }
}

void printHeap(node *start){ //Mostly for debugging
    while(start->next != NULL){
        printf("%c %d\n",start->c,start->freq);
        start = start->next;
    } 
    printf("\n");
}


struct node* createBranch(node *first, node *second){ //Creates the branch of the two least frequent items 
    node *newBranch = malloc(sizeof(struct node));

    first->parent = newBranch;
    second->parent = newBranch;
    
    newBranch->freq=first->freq+second->freq;
    newBranch->c=' '; 
    newBranch->left = first;
    newBranch->right = second;

    newBranch->next = NULL;
    newBranch->prev = NULL;

    first->prev->next = second->next;
    second->next->prev = first->prev;

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
    printf ( "%c %d", root->c ,root->freq);
    printTree(root->left, level + 1 );
  }
}

void* addChar(char *s, char c) {
    int l = strlen(s);  
    s[l] = c;
    s[l + 1] = '\0';
}

void printEncoding(struct node *root, char encoding[]){
    if(root->right==NULL || root->left==NULL){
        printf("%c %s\n",root->c,encoding);
    } else {
    char leftEncoding[20]; //Should be a better way of doing this but i'm not sure how. 
    char rightEncoding[20];
    strcpy(leftEncoding,encoding);
    strcpy(rightEncoding,encoding);
    addChar(leftEncoding,'1');
    addChar(rightEncoding,'0');
   
    printEncoding(root->right,rightEncoding);
    printEncoding(root->left,leftEncoding);
    }
}

int main(){
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' }; 
    int freq[] = { 5, 9, 12, 13, 16, 27 }; 

    int size = sizeof(arr)/sizeof(arr[0]);

    node *start = malloc(sizeof(struct node));
    start->c = '0';
    start->freq = 0;
    start->prev = NULL;
    start->next = NULL;

    for(int index = 0; index < size+1; index++){
        heapConstruct(arr[index],freq[index],start);
    }

    while(start->next->next->next != NULL){
        insertBranch(start,createBranch(start->next,start->next->next)); 
    }

    //printTree(start->next,0);
    printEncoding(start->next,"");
}


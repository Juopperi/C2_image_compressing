#include <stdlib.h>
#include <stdio.h>

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

void addNode(char arr, int freq, node *currentNode){
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

void printHeap(node *start){
    while(start->next != NULL){
        printf("%c %d\n",start->c,start->freq);
        start = start->next;
    } 
    printf("\n");
}


struct node* create(node *first, node *second){
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

void printTree( struct node *root, int level )
{
  if ( root == NULL ) {
    for (int i = 0; i < level; i++ )
        putchar ( '\t' );
    puts ( "~" );
  }
  else {
    printTree ( root->right, level + 1 );
    for (int i = 0; i < level; i++ )
        putchar ( '\t' );
    printf ( "%c %d\n", root->c ,root->freq);
    printTree ( root->left, level + 1 );
  }
}

int main(){
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' }; 
    int freq[] = { 5, 9, 12, 13, 16, 45 }; 

    int size = sizeof(arr)/sizeof(arr[0]);

    node *start = malloc(sizeof(struct node));
    start->c = '0';
    start->freq = 0;
    start->prev = NULL;
    start->next = NULL;

    for(int index = 0; index < size+1; index++){
        addNode(arr[index],freq[index],start);
    }
    printHeap(start);

    while(start->next->next->next != NULL){
        insertBranch(start,create(start->next,start->next->next)); 
    }

    printHeap(start);

    printTree(start->next,0);

}


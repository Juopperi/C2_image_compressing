#include <stdlib.h>
#include <stdio.h>

struct heap {
    char c;
    int freq;
    struct heap *prev;
    struct heap *next;
};
typedef struct heap heap;

struct leave {
    char c;
    int freq;
    struct branch *parent;
};
typedef struct leave leave;

struct branch {
    int freq;
    struct leave *left;
    struct leave *right;
    struct heap *prev;
    struct heap *next;
};
typedef struct branch branch;


void addNode(char arr, int freq, heap *currentNode){
    while(currentNode->next != NULL){
        currentNode = currentNode->next;
    }
    heap *newNode = malloc(sizeof(struct heap));
    currentNode->next = newNode;

    newNode->c = arr;
    newNode->freq = freq;
    newNode->prev = currentNode;
    newNode->next = NULL;
}

int insertBranch(heap *start, branch *insert){
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

void printHeap(heap *start){
    while(start->next != NULL){
        printf("%c %d\n",start->c,start->freq);
        start = start->next;
    } 
}


struct branch* create(heap *first, heap *second){
    leave *newLeave1 = malloc(sizeof(struct leave));
    leave *newLeave2 = malloc(sizeof(struct leave));
    branch *newBranch = malloc(sizeof(struct branch));
    newLeave1->parent = newLeave2->parent = newBranch;

    newLeave1->c = first->c;
    newLeave1->freq = first->freq;
    
    newLeave2->c = second->c;
    newLeave2->freq = second->freq;

    
    newBranch->freq=first->freq+second->freq;
    newBranch->left = first;
    newBranch->right = second;
    newBranch->next = NULL;
    newBranch->prev = NULL;
    return newBranch;
}



int main(){
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' }; 
    int freq[] = { 5, 9, 12, 13, 16, 45 }; 

    int size = sizeof(arr)/sizeof(arr[0]);

    heap *start = malloc(sizeof(struct heap));
    start->c = '0';
    start->freq = 0;
    start->prev = NULL;
    start->next = NULL;

    for(int index = 0; index < size+1; index++){
        addNode(arr[index],freq[index],start);
    }
    printHeap(start);


    branch *branch1 = create(start->next,start->next->next);
    insertBranch(start,branch1);

    printHeap(start);




}


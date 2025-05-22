#ifndef HUFFMAN_H_
#define HUFFMAN_H_

typedef struct node {
    int c;
    int freq;
    struct node *prev;
    struct node *next;
    struct node *left;
    struct node *right;
    struct node *parent;
}node;

typedef struct coding{
    int c[128];
    char code[128][128];
    int index;
}coding;

void heapConstruct(int arr, node *currentNode);

int insertBranch(node *start, node *insert);
void printHeap(node *start);

struct node* createBranch(node *first, node *second);

void printTree( struct node *root, int level );

void* addChar(char *s, char c);

void createEncoding(struct node *root, struct coding *start, char encoding[]);

struct node* bubbleSort(struct node* head);


#endif
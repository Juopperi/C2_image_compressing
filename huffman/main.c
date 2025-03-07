#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "huffman.h"

int main(){
    int input[] = {370 ,-1 ,27 ,2 ,-7 ,-3 ,-6 ,-3 ,4 ,5 ,0 ,-2 ,1 ,2 ,0 ,-1 ,1 ,-2 ,0 ,0 ,0 ,0 ,1 ,1 ,0 ,2 ,0 ,-1 ,-1 ,0 ,0 ,0 ,1 ,0 ,-1 ,-1 ,0 ,1 ,1 ,-1 ,0 ,0 ,0 ,0 ,-1 ,0 ,-1 ,1 ,-1 ,0 ,0 ,-1 ,0 ,0 ,-1 ,0 ,1 ,-1 ,0 ,0 ,-1 ,0 ,0 ,0};
    int size = sizeof(input)/sizeof(input[0]);
    
    node *start = malloc(sizeof(struct node));
    start->c = 1337;
    start->freq = 0;
    start->prev = NULL;
    start->next = NULL;

    for(int index = 0; index < size; index++){
        heapConstruct(input[index],start);
    }
    //printHeap(start);
    start = bubbleSort(start);

    while(start->next->next != NULL){  
        insertBranch(start,createBranch(start->next,start->next->next));
    }

    coding *coding = malloc(sizeof(struct coding));
    createEncoding(start->next,coding,"");
    //printTree(start,0);
    
    //Print the encoding the file
    FILE *fptr;
    fptr = fopen("huffmanEncoding.txt","w");
    for(int indexCode = 0; indexCode < coding->index; indexCode++){
        fprintf(fptr,"%d %s\n",coding->c[indexCode],coding->code[indexCode]);
    }
    fclose(fptr);

    char huffmanCode[200] ={'\0'};
    
    for(int indexInput = 0; indexInput < size; indexInput++){ //Encodes the numbers
        for(int indexCode = 0; indexCode < coding->index; indexCode++){
            if(input[indexInput] == coding->c[indexCode]){
                strcat(huffmanCode,coding->code[indexCode]);
            }
        }
    }


    int index = 0;
    int baseline = 0;
    int length = 1;
    char ss[20];
 
    while(baseline < strlen(huffmanCode)){   //Decodes
        strncpy(ss,huffmanCode+baseline,length);
        ss[length] = '\0';   
        for(int indexCode = 0; indexCode < coding->index; indexCode++){
            if(strcmp(ss,coding->code[indexCode])==0){
                printf("%d ",coding->c[indexCode]);
                baseline = baseline + length;
                length = 1;
                break;
            } else if(indexCode == coding->index-1){
                length++;
            }
        }
    }
}


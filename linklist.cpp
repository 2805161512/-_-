#include <stdio.h>
#include <stdlib.h>
typedef struct Lnode
{
    int data;
    struct Lnode *next;
    
}Lnode, *LinkList;

 
int main()
{
    /* 我的第一个 C 程序 */
    Lnode *S;
    S = (Lnode*)malloc(sizeof(Lnode));
    S->data = 1;
    S->next = NULL;
    printf("Hello, World! \n");
 
    return 0;
}
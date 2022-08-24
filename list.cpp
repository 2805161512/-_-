#include <stdio.h>
#include <stdlib.h>
#define MaxSize 50
typedef struct List
{
    int data[MaxSize];
    int length;
    
}List;
int main()
{
    List L;
    L.data[0] = 4;
    L.length = 1;
    return 0;
}

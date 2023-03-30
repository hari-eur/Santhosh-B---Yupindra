#include<stdio.h>
int main()
{
    int array[5] = {1,2,1,2,1};
    int *pointer;
    for(pointer=&array[0];pointer<=&array[4];pointer++)
    {
        printf("%d ",*pointer);
    }
}

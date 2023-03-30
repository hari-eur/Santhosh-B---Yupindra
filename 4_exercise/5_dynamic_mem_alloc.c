#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *array;
    int num, i, sum=0;
    printf("Number of elements: ");
    scanf("%d",&num);
    array = (int*)calloc(num, sizeof(int));
    for(i=0; i<num; i++)
    {
        scanf("%d", &array[i]);
        sum=sum+array[i];
    }
    printf("Sum is %d",sum);
    free(array);
}

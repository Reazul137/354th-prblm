#include<stdio.h>
int main()
{
    int arr[10], i;

    printf("\n\n Read and Print elements of an array : \n");
    printf("---------------------------------------------");

    printf("Input 10 elements in the array : \n");
    for (i=0; i<10; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Element in array are : ");
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

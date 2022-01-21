#include<stdio.h>
int arraySearch(int arr[],int size,int n)
{
    int i;
    for(int i=0;i<size;i++){
        if(n==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[5];
    int n;
    printf("enter the no of elements:\n");
    for(int i=0;i<5;i++)
    {
        printf("enter the numbers:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("elements are :%d\n",arr[i]);
    }
    printf("Enter a number want to search:");
    scanf("%d",&n);
    if(arraySearch(arr,5,n))
        printf("num is present in the array \n");
    else
        printf("num is not present in the array \n");
    return 0;

}

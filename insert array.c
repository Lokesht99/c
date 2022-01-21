#include<stdio.h>
int arrayinsert(int arr[],int pos,int n,int i,int value)
{
    for(int i=0;i<pos;i++){
        if(n==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[50],pos,i,n,value;
    printf("Enter the number of elements in the array :\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the location where if you want to insert\n");
    scanf("%d",&pos);
    printf("enter the values\n");
    scanf("%d",&value);
    for(i=n-1;i>=pos-1;i--)
        arr[i+1]=arr[i];
    arr[pos-1]=value;
    printf("final array is \n");
    for(i=0;i<=n;i++)
            printf("%d",arr[i]);
}

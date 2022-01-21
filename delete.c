#include<stdio.h>
int arrayDelete(int arr[],int pos,int n,int i,int value)
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
    int arr[100],pos,i,n;
    printf("Enter the number of elements in the array :\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the value to delete element\n");
    scanf("%d",&pos);
    {
        if(pos>=n+1)
            printf("deletion not possible.\n");
        else{
            for(i=pos-1;i<n-1;i++)
        arr[i]=arr[i+1];
    printf("final array is \n");
    for(i=0;i<=n-1;i++)
    printf("%d\n",arr[i]);

        }
    }

}

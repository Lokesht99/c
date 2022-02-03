#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *data;
    printf("enter the total num of elements: ");
    scanf("%d",&n);
    data=(int *)calloc(n,sizeof(int));
    if(data==NULL){
        printf("error!!! memory not allocated.");
        exit(0);
    }
    for(int i=0;i<n;i++){
        printf("enter number%d: ",i+1);
        scanf("%d",data+i);
    }
    for(int i=1;i<n;i++)
    {
        if(*data<*(data+i)){
            *data=*(data+i);
        }
    }
    printf("largest num=%d",*data);
    free(data);
    return 0;
}



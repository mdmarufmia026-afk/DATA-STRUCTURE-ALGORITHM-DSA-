#include<stdio.h>
int main()
{
    int LA[10]={57,34,14,32};
    int N=4,k=2,ITEM;
    ITEM=LA[k-1];
    for(int j=k-1;j<=N-1;j++)
    {
       LA[j]=LA[j+1];
    }
    N=N-1;

    for(int i=0;i<N;i++)
    {
        printf("%d\n",LA[i]);
    }
    
return 0;
}
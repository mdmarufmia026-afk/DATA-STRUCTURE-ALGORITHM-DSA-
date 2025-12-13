#include<stdio.h>
int main()
{
int LA[5]={2,6,5,7};
int    N=4,k=2,ITEM=25;
for(int j=N-1;j>=k;j--)
{
    LA[j+1]=LA[j];
}

LA[k]=25;
N=N+1;
for (int i=0;i<N;i++)
{
printf("%d\n",LA[i]);

}

return 0;

}
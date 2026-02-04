#include<stdio.h>
int main()
{
  int DATA[]={4,52,12,25,28,19};
  int N=6, temp;
  for(int k=0;k<N;k++)  
  { int ptr=0;
    while(ptr<=N-k)
    {if(DATA[ptr]>DATA[ptr+1])
     {
        temp=DATA[ptr];
        DATA[ptr]=DATA[ptr+1];
        DATA[ptr+1]=temp;
     }
     ptr=ptr+1;
     //printf("%d ",DATA[ptr-1]);

    }
  printf("%d ",DATA[k]);
  }
  return 0;
}

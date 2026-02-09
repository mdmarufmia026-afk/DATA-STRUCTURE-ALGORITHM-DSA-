#include<stdio.h>
#include<math.h>
int main()
{
    int data[]={23,34,40,45,46,56,70};
    int beg=0,n=7,end=n-1,item=45;
    while (beg<=end)
    {
      int mid=((beg+end)/2);
      if(data[mid]==item)
      { 
       printf("%d",data[mid]);
       break;
      }
   else if(data[mid]<item)
    {
    beg=mid+1;
    }
   if(data[mid]>item)
    {
    end=mid-1;
    }

    }
    if (beg>end)
    printf("null");



 return 0;
}
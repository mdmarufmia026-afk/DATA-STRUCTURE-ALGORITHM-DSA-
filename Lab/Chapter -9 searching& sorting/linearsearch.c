#include<stdio.h>
int main()
{
    int data[]={25,24,34,12,65,76}; 
int n=6,item=132,loc;
for(loc=0;loc<n;loc++)
{
  if (data[loc]==item)
   
printf("%d",data[loc]);

else{
printf("item is not found");
break;
}
}
return 0;

}
#include<iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i=0;i<n; i++)
cout<<arr[i]<<endl;
}//function for insertion
int indInsertion(int arr[],int size, int element,int capacity,int index)
{
if( size>=capacity){
    return -1;

}
for(int i=size;i>=index ;i--){
    arr[i+1]=arr[i];
}
arr[index]=element;
return 1;
} 

int main(){
    int arr[100]={23,12,34,43,54};
    int size=5,element=45,index=1;
   // display(arr,5);
 indInsertion(arr,size=5,element=45,100,index=1);
size+=1;
display(arr,6);
return 0;
}
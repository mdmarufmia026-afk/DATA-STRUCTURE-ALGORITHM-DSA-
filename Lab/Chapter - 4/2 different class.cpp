
#include<iostream>
using namespace std;
class myclass
{
int a;
int b;
public:
    myclass(int i,int j)
{
    a=i;
    b=j;
}
void show()
{
    cout << a <<" " <<b<<endl;
}
};
class yourclass
{
    int a;
    int b;
public:
    yourclass(int i,int j)
{
    a=i;
    b=j;
}
void show()
{
    cout<<a<< " " <<b<<endl;
}
};
int main()
{
    myclass ob1(2,3);
    yourclass ob2(3, 4);
    ob2=ob1;
    ob1.show();
    ob2.show();
    return 0;
}

#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;
void push(int data)
{
    if(top == MAX-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Deleted: %d\n", stack[top]);
        top--;
    }
}

void peek()
{
    if(top == -1)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Top Element: %d\n", stack[top]);
    }
}
void display()
{
    if(top == -1)
    {
        printf("Stack Empty\n");
    }
    else
    {
        for(int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    push(15);
    push(40);
    push(30);

    display();

    pop();
    display();

    peek();

    return 0;
}
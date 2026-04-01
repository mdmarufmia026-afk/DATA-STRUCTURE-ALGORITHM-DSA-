#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue Function
void enqueue(int data)
{
    if(rear == MAX-1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = data;
    }
}
void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted: %d\n", queue[front]);
        front++;
    }
}
void peek()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Empty\n");
    }
    else
    {
        printf("Front Element: %d\n", queue[front]);
    }
}
void display()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Empty\n");
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    peek();

    return 0;
}
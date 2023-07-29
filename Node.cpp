#include<iostream>
using namespace std;

#define max 5


int q[max],front=-1,rear=-1;

void enqueue()
{
    int data;
    if(rear==max-1)
    {
        cout<<"Overflow";
    }
    else{
        if(front=-1)
        {
            front=0;
        }
        cout<<"Enter element:";
        cin>>data;
        rear++;
        q[rear]=data;
    }
}
void dequeue()
{
    if(front==-1||front>rear)
    {
        cout<<"Underflow";
    }
    else{
        cout<<"\nDequeued:"<<q[front];
        front++;
    }

}
void disp()
{
    int i;
    if(front==-1)
    {
        cout<<"\nQueue is Empty";
    }
    else
    {
        cout<<"Elements: ";
        for(i=front;i<=rear;i++)
        {
            cout<<q[i]<<" ";
        }
    }
}



int main() {
    int a;
    printf("\n1.Enqueue");
    printf("\n2.Dequeqe");
    printf("\n3.display");
    printf("\n4.exit");
    while(1)
    {
        cout<<"\nEnter your choice";
        cin>>a;
        switch(a)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            disp();
            break;
           case 4:
            exit(0);

            default :
            cout<<"Enter valid number";
        }
    }
}


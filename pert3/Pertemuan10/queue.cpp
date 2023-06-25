#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#define Max 50          // defining the size of queue
int queue[MAX], front = 0, rear = -1, itemCout = 0;
bool isEmpty ()
{
    return itemCount == 0;
}
bool isFull ()
{
    return itemCount == MAX;
}
void enqueue (int data)
{
    if (!isFull ())
    {
        if (rear == MAX -1)
    {
        rear = -1;
    }
        queue [++rear] = data;
        itemCout++;
    }

}
void display ()            //function to display the relents of the queue
{
    print ("The elements in the queue are");
    int i;
    if (isEmpty ())
    printf ("Queue is Empty");
    else
    for (i = front; i <= rear; i++)
    {

    Printf ("%d ", queue[i]);
    }
    printf (\n);
}
void dequeue                //function to  display elments from the queue
{
    if(isEmpty ())
    printf("Queue is Empty");
    else
    {
        queue[front] = 0;
        front = front + 1;
        itemCount--;
    }
    display ();
}

int queuesize ()
{
    return itemCount;
}

int main ()
{
    enqueue (3);
    enqueue (5);
    enqueue (9);
    enqueue (1);
    enqueue (12);
    enqueue (15);
    int size = queuesize ();
    display ();
    denquue ();
    denquue ();
    enqueue (15);
    enqueue (16);
    enqueue (17);
    //printf ("\nDequeuing elements:\n");
        //for (int i = 0; i < size; i++)
        //{
        // dequue ();
        //}
}
#include <stdio.h>
static front = -1;
rear = -1;

void enque(int arr[], int n, int element)
{
    if (rear == n)
    {
        printf("Queue Overflow");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    arr[rear] = element;
}
int deque(int arr[])
{
    int temp;
    if (front < 0)
    {
        printf("Queue Underflow");
        return 0;
    }
    temp = arr[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
        return temp;
    }
    front++;
    return temp;
}
void display(int arr[])
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void main()
{
    int n, i, element;
    printf("Enter no. of element : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element : ");
        scanf("%d", &element);
        enque(arr, n, element);
    }
    display(arr);
    printf("\nDeque Element : %d\n", deque(arr));
    display(arr);
}
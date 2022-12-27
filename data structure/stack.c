#include <stdio.h>
static top = -1;
void push(int arr[], int n, int element)
{
    if (top >= n)
    {
        printf("fStack Overflow");
        return;
    }
    top++;
    arr[top] = element;
    return;
}
int pop(int arr[])
{
    int temp;
    if (top < 0)
    {
        printf("Stack Underflow");
        return 0;
    }
    temp = arr[top];
    top--;
    return temp;
}
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int peep(int arr[], int i)
{
    if (top < 0)
    {
        printf("Stack Underflow");
        return 0;
    }
    return arr[top - i + 1];
}
void change(int arr[], int i, int n)
{
    if (top < 0)
    {
        printf("Stack Underflow");
        return;
    }
    arr[top - i + 1] = n;
    return;
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
        push(arr, n, element);
    }
    display(arr, n);
    printf("Poped element : %d\n", pop(arr));
    printf("Piped element : %d\n", peep(arr, 3));
    change(arr, 3, 7);
    display(arr, n);
}

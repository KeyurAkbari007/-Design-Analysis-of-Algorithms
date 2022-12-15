#include <stdio.h>
int sum(int n);
void main()
{
    // printf("enter two  numbers");
    int n, result;
    scanf("%d", &n);
    result = sum(n);
    printf("%d", result);
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n + sum(n - 1));
}
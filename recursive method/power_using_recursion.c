#include <stdio.h>
int power(int x, int y);
void main()
{
    // printf("enter two  numbers");
    int x, y, result;
    scanf("%d", &x);
    scanf("%d", &y);
    result = power(x, y);
    printf("%d", result);
}
int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return (x * power(x, y - 1));
}
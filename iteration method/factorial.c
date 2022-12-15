#include <stdio.h>
#include <time.h>
int factorial(int n);
void main()
{
	clock_t start, end;
	double cpu_time_used;
	int n;
	double fact;
	printf("Enter n = ");
	scanf("%d", &n);

	start = clock();

	fact = factorial(n);

	end = clock();

	printf("%lf\n", fact);
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("%lf", cpu_time_used);
}
int factorial(int n)
{
	int i, fact = 1;
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}

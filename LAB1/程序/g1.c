#include<stdio.h>
double Fib(int n)
{
	if(n<=2)
	{
		return 1;
	}
	else
	{
		return Fib(n-1)+Fib(n-2);
	}
}
int main()
{
	long n;
	printf("ÊäÈënµÄÖµ£º");
	scanf("%ld",&n);
	double b=Fib(n-1);
	double c=Fib(n);
	double g;
	g=b/c;
	printf("b=%lf\n",b);
	printf("c=%lf\n",c);
	printf("g=%lf",g);
}


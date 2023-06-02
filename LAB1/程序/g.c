#include<stdio.h>

double Fibx(long n)
{
    double a=1;
    double b=1;
    double c=1;
    while(n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return a;
}
double Fiby(long n)
{
    double a=1;
    double b=1;
    double c=1;
    while(n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}
int main()
{
    long n=0;
    printf("����n��ֵ��");
    scanf("%ld",&n);
    double x,y;
    x=Fibx(n);
    y=Fiby(n);
    double g=x/y;
    printf("x=%.8lf\n",x);
    printf("y=%.8lf\n",y);
    printf("g=%.8lf\n",g);
    return 0;
}


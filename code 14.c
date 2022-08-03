//Recursive function to find the nth term of Fibonacci series

#include<stdio.h>
#include<conio.h>

int fibonacci(int);

int main()
{
    int N,f;
    printf("Enter the number\n");
    scanf("%d",&N);
    f=fibonacci(N);
    printf("%dth term of Fibonacci Series is %d",N,f);
    getch();
}

int fibonacci(int num)
{
    if(num==1 || num==2)
       return num-1;
    int fib;
    fib=fibonacci(num-1)+fibonacci(num-2);
    return fib;
}
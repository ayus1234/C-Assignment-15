//Recursive function to calculate factorial of a given number

#include<stdio.h>
#include<conio.h>

int factorial(int);

int main()
{
    int N,F;
    printf("Enter the number\n");
    scanf("%d",&N);
    F=factorial(N);
    printf("Factorial of %d is %d",N,F);
    getch();
}

int factorial(int num)
{
    if(num==0)
       return 1;
    int f;
    f=num*factorial(num-1);
    return f;
}
//Recursive function to calculate sum of digits of a given number

#include<stdio.h>
#include<conio.h>

int sumDigits(int);

int main()
{
    int N,S;
    printf("Enter the number\n");
    scanf("%d",&N);
    S=sumDigits(N);
    printf("Sum of the Digits of %d is %d",N,S);
    getch();
}

int sumDigits(int num)
{
    if(num==0)
       return 0;
    int s;
    s=num%10+sumDigits(num/10);
    return s;
}
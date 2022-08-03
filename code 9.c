//Recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>
#include<conio.h>

int sumOddN(int);

int main()
{
    int N,S;
    printf("Enter the number\n");
    scanf("%d",&N);
    S=sumOddN(N);
    printf("Sum is %d",S);
    getch();
}

int sumOddN(int num)
{
    if(num==1)
       return 1;
    int s;
    s=2*num-1+sumOddN(num-1);
    return s;
}
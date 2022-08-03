//Recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>
#include<conio.h>

int sumSquareN(int);

int main()
{
    int N,S;
    printf("Enter the number\n");
    scanf("%d",&N);
    S=sumSquareN(N);
    printf("Sum is %d",S);
    getch();
}

int sumSquareN(int num)
{
    if(num==1)
       return 1;
    int s;
    s=num*num+sumSquareN(num-1);
    return s;
}
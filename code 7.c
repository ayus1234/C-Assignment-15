//Recursive function to print squares of first N natural numbers

#include<stdio.h>
#include<conio.h>

void printSquareN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printSquareN(N);
    getch();
}

void printSquareN(int num)
{
    if(num>0)
    {
        printSquareN(num-1);
        printf("%d ",num*num);
    }
}
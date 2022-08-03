//Recursive function to print first N odd natural numbers

#include<stdio.h>
#include<conio.h>

void printOddN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printOddN(N);
    getch();
}

void printOddN(int num)
{
    if(num>0)
    {
        printOddN(num-1);
        printf("%d ",2*num-1);
    }
}
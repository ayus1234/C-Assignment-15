//Recursive function to print first N even natural numbers

#include<stdio.h>
#include<conio.h>

void printEvenN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printEvenN(N);
    getch();
}

void printEvenN(int num)
{
    if(num>0)
    {
        printEvenN(num-1);
        printf("%d ",2*num);
    }
}
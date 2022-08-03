//Recursive function to print first N even natural numbers in reverse order

#include<stdio.h>
#include<conio.h>

void printEvenReverseN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printEvenReverseN(N);
    getch();
}

void printEvenReverseN(int num)
{
    if(num>0)
    {
        printf("%d ",2*num);
        printEvenReverseN(num-1);
    }
}
//Recursive function to print first N natural numbers

#include<stdio.h>
#include<conio.h>

void printN(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printN(N);
    getch();
}

void printN(int num)
{
    if(num>0)
    {
        printN(num-1);
        printf("%d ",num);
    }
}
//Recursive function to calculate sum of first N even natural numbers

#include<stdio.h>
#include<conio.h>

int sumEvenN(int);

int main()
{
    int N,S;
    printf("Enter the number\n");
    scanf("%d",&N);
    S=sumEvenN(N);
    printf("Sum is %d",S);
    getch();
}

int sumEvenN(int num)
{
    if(num==1)
       return 2;
    int s;
    s=2*num+sumEvenN(num-1);
    return s;
}
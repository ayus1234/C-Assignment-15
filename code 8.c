//Recursive function to calculate sum of first N natural numbers

#include<stdio.h>
#include<conio.h>

int sumN(int);

int main()
{
    int N,S;
    printf("Enter the number\n");
    scanf("%d",&N);
    S=sumN(N);
    printf("Sum is %d",S);
    getch();
}

int sumN(int num)
{
    if(num==1)
       return 1;
    int s;
    s=num+sumN(num-1);
    return s;
}
#include<stdio.h>

void CheckEvenOdd (int iValue)
{
    if ((iValue % 2) == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    CheckEvenOdd(iValue);

    return 0;
}
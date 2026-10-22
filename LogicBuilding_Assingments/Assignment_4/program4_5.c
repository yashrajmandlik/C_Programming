#include<stdio.h>

void CheckDivisibility (int iValue)
{
    if ((iValue % 5) == 0)
    {
        printf("Number is divisible by 5 . \n");
    }
    else 
    {
        printf("Number is not divisible by 5 .");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter your Number :\n");
    scanf("%d",&iValue  );

    CheckDivisibility(iValue);

    return 0;
}
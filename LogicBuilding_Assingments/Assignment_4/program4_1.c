#include<stdio.h>

void CheckNumber (int iValue)
{
    if (iValue > 0)
    {
        printf("Positive Number :");
    }
    else if (iValue < 0)
    {
        printf ("Negative Number :");
    }
    else
    {
        printf("zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    CheckNumber(iValue);

    return 0;
}
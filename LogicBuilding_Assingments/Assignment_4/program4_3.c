#include<stdio.h>

void FindGreater (int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        printf("%d is greater ", iNo1);
    }
    else if (iNo1 < iNo2)
    {
        printf("%d is greater ", iNo2);
    }
    else 
    {
        printf("Both are same");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue1);

    printf("Enter number :\n");
    scanf("%d",&iValue2);
    
    FindGreater(iValue1,iValue2);

    return 0;
}
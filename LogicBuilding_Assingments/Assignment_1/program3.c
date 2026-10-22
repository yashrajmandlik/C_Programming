#include<stdio.h>

void Display()
{
    int i = 5;

    int iCnt=1;
    

    while (iCnt <= i)
    {
        printf("%d\n",i);
        i++;
    }
}

int main()
{
    Display();

    return 0;
}
#include <stdio.h>

void CheckVotingEligibility (int iAge)
{
    if (iAge >= 18)
    {
        printf("Eligible for voting.\n");
    }
    else if (iAge <= 0)
    {
        printf("Invalid Age");
    }
    else 
    {
        printf("Not eligible for voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your Age :\n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return 0;
}
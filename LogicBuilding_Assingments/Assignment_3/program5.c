
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOl;
#define true 1
#define false 0

bool checkvowel(char cValue)
{
    if(cValue == 'a' ||  cValue == 'e'|| cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    BOOl bRet = false;

    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = checkvowel(cValue);
    
    if(bRet == true)
    {
        printf("its  vowel\n");
    }
    else
    {
        printf("its not vowel\n");
    }


    return EXIT_SUCCESS;
}
#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the Character: ");
    scanf("%c", &ch);

    if(ch>=65 && ch<=90)
    {
        printf("Capital Letter");
    }
    else if(ch>96 && ch<123)
    {
        printf("Small Letter");
    }
    else if(ch>48 && ch<90)
    {
        printf("Numbers");
    }
    else
    {
        printf("Special Symbol");
    }
    return 0;
}
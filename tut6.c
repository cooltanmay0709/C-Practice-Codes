//Convert from Capital to Small and Small to Capital

#include<stdio.h>

int main()
{
    char ch;
    
    printf("Enter any letter in Capital or Small: ");
    scanf("%c", &ch);

    if(ch>64 && ch<91)
    {
        ch=ch+32;
        printf("Converted from Capital to Small %c", ch);
    }
    else if(ch>96 && ch<123)
    {
        ch=ch-32;
        printf("Converted from Small to Capital %c", ch);
    }
    return 0;
    
}
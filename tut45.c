// String - Simple Program.

#include<stdio.h>

int main()
{
    char a[10], i;
    printf("Enter the Name: ");
    gets(a);
    puts(a);

}

int main()
{
    char a[10], i; 
    scanf("%s", &a);
    printf("%s", a);
}

int main()
{
    char a[10];
    int  i;
    gets(a);
    for(i=0; a[i]!='\0'; ++i)
    {
        printf("%c", a[i]);
    }
}
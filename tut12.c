// Using while loop print even numbers between 1 to 20

#include<stdio.h>

int main()
{
    int a;
    a=1;
    while(a<=20)
    {
        if(a%2==0)
        {
            printf("\n%d",a);
        }
        a++;

    }
}
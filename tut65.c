// Recurssion(Function calling itself again and again) - Basic code.

#include<stdio.h>

void disp(int x)
{
    if(x<=10)
    {
        printf("\n%d", x);
        x++;
        disp(x);
    }
}

int main()
{
    int a;
    a=1;
    disp(a);
}
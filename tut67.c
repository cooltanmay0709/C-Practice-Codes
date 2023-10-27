// Recurssion - Reverse the Number. 

#include<stdio.h>

int reverse(int x,int z)
{
    int i, b, m;
    b=0;
    if(x>0)
    {
        i=x%10;
        z=z*10+i;
        z=reverse(x/10,z);

    }
    return z;
}
int main()
{
    int y, z=0;
    printf("\nEnter the Number: ");
    scanf("%d", &y);
    z=reverse(y,z);
    printf("\nReverse of the Number %d is %d", y, z);

}
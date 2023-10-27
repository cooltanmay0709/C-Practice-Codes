// Print the following pattern using for loop.
/*  ABCDEFFEDCBA
    ABCDE  EDCBA
    ABCD    DCBA
    ABC      CBA
    AB        BA
*/

#include<stdio.h>

int main()
{
    int i, j, k, l;

    for(i=70; i>65; --i)
    {
        for(j=65; j<=i; ++j)
        {
            printf("%c", j);
        }
        for(k=i; k<=69; ++k)
        {
            printf("  ");
        }
        for(l=i; l>=65; --l)
        {
            printf("%c", l);
        }
        printf("\n");
    
    }
}
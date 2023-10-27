// Print the patterns using for loop.
/*  1      1
    12    21
    123  321
    12344321
*/

#include<stdio.h>

int main()
{
    int i, j, k, l;
    
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d", j);
        }
        for(k=i; k<=3; ++k)
        {
            printf("  ");
            
        }
        for(l=i; l>=1; --l)
            {
                printf("%d", l);
            }
        printf("\n");
    }
}
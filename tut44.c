// 2D Array...Add the numbers other than the diagonal elements.

#include<stdio.h>

int main()
{
    int a[3][3], i, j, k, l, m, n, p, q, r;

    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
        printf("Enter the Number: ");
        scanf("\n%d", &a[i][j]);            
        }
    }
    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            if(i+j==2-1 || i+j==4-1)
            {
                k=k+a[i][j];
                l=k;
            }
        }
        l=l+a[i][j];
        m=l;
        
    }
    printf("\nResult\n");
    printf("\n%d", m);
}
// 2D Array(Matrix). Take the sum of all the elements.

#include<stdio.h>

int main()
{
    int a[3][3], i, j, k, d, f;

    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            printf("Enter the Number: ");
            scanf("%d", &a[i][j]);
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
            k=k+a[i][j];
            d=k;
        }
        d=d+a[i][j];
        f=d;
    }
    printf("\n%d", f);
}
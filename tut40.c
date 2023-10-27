// 2D Array(Matrix). Take the sum of all the diagonal elements.

#include<stdio.h>

int main()
{
    int a[3][3], i, j, k, d;

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
            if(i+j==3-1)
            {
            k=k+a[i][j];
            }
        }
    }
    printf("\n%d", k);
    return 0;
}

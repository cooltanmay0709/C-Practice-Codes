// 2D Array(Matrix) Multiply two different matrix.

#include<stdio.h>

int main()
{
    int a[3][3], b[3][3], i, j, k, sum;
    
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
            printf("Enter the Number: ");
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
    printf("\nResult\n");
    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            sum=0;
            for(k=0; k<3; ++k)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            printf("\t%d", sum);
        }
        printf("\n");
    }
    
}
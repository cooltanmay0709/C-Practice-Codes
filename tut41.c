// 2D Array(Matrix) Add two different matrix and the output should be in matrix form.

#include<stdio.h>

int main()
{
    int a[3][3], b[3][3], c, i, j;
    
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
            c=a[i][j]+b[i][j];
            printf("\t%d", c);
        }
        printf("\n");
    }
    
}
// 2D Array(Matrix)

#include<stdio.h>

int main()
{
    int a[3][3], i, j;

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
}
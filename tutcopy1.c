// Find the Saddle Point in the array.

#include<stdio.h>

int main()
{
    int a[3][3], b[3], c[3], i, j, max, min;

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

    printf("\nResult\n");

    for(i=0; i<3; ++i)
    {
        max=0;
            min=9999;
        for(j=0; j<3; ++j)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            if(a[j][i]<min)
            {
                min=a[j][i];
            }
        }
        b[i]=max;
        c[i]=min;
    }
    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            if(b[i]==c[j])
            {
                printf("\nSaddle Point is %d", b[i]);
            }
        }
    }
}


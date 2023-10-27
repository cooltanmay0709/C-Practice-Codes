// Finding common elements between two Arrays. 

#include<stdio.h>

int main()
{
    int a[4], i, b[4], j, c, k;

    for(i=0; i<4; ++i)
    {
        printf("Enter the number: ");
        scanf("%d", &a[i]);
    }
    for(j=0; j<4; ++j)
    {
        printf("Enter the Number: ");
        scanf("%d", &b[j]);
    }
    for(i=0; i<4; ++i)
    {
        for(j=0; j<4; ++j)
        {
            if(a[i]==b[j])
            {
                printf("\nThe common elements are: %d", a[i]);
            }
        }
    }
}
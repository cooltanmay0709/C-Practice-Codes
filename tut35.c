// Find Uncommon in the Array.

#include<stdio.h>

int main()
{
    int a[4], i, b[4], j, k;
    
    for(i=0; i<4; ++i)
    {
        printf("Enter the Numbers: ");
        scanf("%d", &a[i]);
    }
    for(j=0; j<4; ++j)
    {
        printf("Enter the Numbers: ");
        scanf("%d", &b[j]);
    }
    for(i=0; i<4; ++i)
    {
        k=0;
        for(j=0; j<4; ++j)
        {
            if(a[i]==b[j])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            printf("\n%d", a[i]);
        }
    }
    for(i=0; i<4; ++i)
    {
        k=0;
        for(j=0; j<4; ++j)
        {
            if(b[i]==a[j])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
        printf("\n%d", b[i]);
        }
    }
return 0;
}
// A steel is Graded as per the folllowing conditions
// 1) Hardness greater than 58
// 2) Carbon Content less than 0.7
// 3) Tensile Strength Greater than 5800
// Grade 10 if all conditions are satisfied
// Grade 9 if 1 & 2 is satisfied
// Grade 8 if 1 & 3 is satisfied
// Grade 7 if 2 & 3 is satisfied
// Grade 6 if any one is satisfied
// Grade 5 id none is satisfied

#include<stdio.h>

int main()
{
    int H, T;
    float C;
    
    printf("Enter the Hardness, Carbon Content and Tensile Strength: \n");
    scanf("%d %f %d", &H, &C, &T);

    if(H>58&&C<0.7&&T>5800)
    {
        printf("Grade 10");
    }
    else if(H>58&&C<0.7)
    {
        printf("Grade 9");
    }
    else if(H>58&&T>5800)
    {
        printf("Grade 8");
    }
    else if(C<0.7&&T>5800)
    {
        printf("Grade 7");
    }
    else if(H>58||C<0.7||T>5800)
    {
        printf("Grade 6");
    }
    else
    {
        printf("Grade 5");
    }

}
// Accept 5 subjects marks and calculate total and average and assign. Grade as per follows 
// if average > 70 grade A
// if average > 60 grade B
// if average > 50 grade C
// else Grade D

#include<stdio.h>

int main()
{
    int Eng, Chem, Phy, Math, Bio;
    float tot, avg;

    printf("Enter the Marks for the Subjects: Eng, Chem, Phy, Math, Bio.");
    scanf("%d\n%d\n%d\n%d\n%d", &Eng, &Chem, &Phy, &Math, &Bio);

    tot = Eng+Chem+Phy+Math+Bio;
    avg = tot/5;

    printf("Total: %f\nAverage: %f", tot, avg);

    if (avg>=70)
    {
        printf("Grade A");
    }
    else if (avg>=60)
    {
        printf("Grade B");
    }
    else if(avg>=50)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade D");
    } 
}

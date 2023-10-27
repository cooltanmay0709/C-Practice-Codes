#include<stdio.h>
#include<conio.h>

void main()
{
    int q, r;
    float amt, dis, net;
    

    printf("Enter the Quantity: ");
    scanf("%d",&q);
    printf("Enter the Rate: ");
    scanf("%d",&r);
    
    amt=q*r;
    dis=amt*30/100;
    net=amt-dis;

    printf("\nThe Amount for given quantity is %f", amt);
    printf("\nThe Discount Amount is %f", dis);
    printf("\nThe Total Net Amount is %f", net);

}
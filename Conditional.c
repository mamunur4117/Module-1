#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a=5;
    int price=35;
    int n=85;
    int TD=4;
    printf("Before if\n");
    if(a<=10 )
    {
        printf("%d\n",a+=100);
        printf("Hello, if\n");
    }
    printf("Outside if\n");
    if(price<=50)
    {
        printf("Buy 4 eggs\n");
        printf("Take back %d taka\n",50-price);
    }
    else{
        printf("Buy 2 eggs");
    }
    if(n>80)
    {
        printf("You got A+");
    }
    else if (n>70)
    {
        printf("You got A");
    }
    else if (n>60)
    {
        printf("You got A-");
    }
    else
    {
        printf("You got less than 60");
    }
    if(TD==2)
    {
        bool isBoatAvailable=true;
        if(isBoatAvailable)
        {
            printf("Going to Tangouar Haur\n");
        }
        else{
            printf("Going to shiliguri");
        }
    }
    else if(TD==4)
    {
        bool isShipAvailable=true;
        if(isShipAvailable)
        {
            printf("Going to Saint Martin\n");
        }
        else
        {
            printf("Going to Cox Bazar\n")
        }
    }
    return 0;
}
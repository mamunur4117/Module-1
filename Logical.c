#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool result=!((2<5) || (3>6) || (5<6));
    printf("%d",result);
    return 0;
}
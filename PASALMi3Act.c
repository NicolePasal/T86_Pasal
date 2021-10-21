#include<stdio.h>

int main ()
{
    int temp;
    printf("Enter the temp:");
    scanf("%d", &temp);
    
    if (temp <0)
    {
        printf("The Weather is freezing");
    }
    else if(temp >=1 && temp <=10)
    {
        printf("The Weather is very cold");
    }
    else if(temp >=11 && temp<=20)
    {
        printf("The weather is Cold");
    }
    else if(temp >=21 && temp <=30)
    {
        printf("The weather is normal");
    }
    else if(temp >=31 && temp <=40)
    {
        printf("The weather is hot");
    }
    else 
    {
        printf("The weather is very hot");
    }
    return 0;
}
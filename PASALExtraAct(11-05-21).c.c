#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char input[1000], digits;
    int n;
    
    printf("Input Any Number/s: ");
    scanf("%s", input);
    
    n = strlen(input);
    printf("Your %s Word is: \n", input);
    for(int x=0; x<n; x++)
    {
        digits = input[x];
        if(digits == '0')
        {
            printf("Zero ");
        }
        else if(digits == '1')
        {
            printf("One ");
        }
        else if(digits == '2')
        {
            printf("Two ");
        }
        else if(digits == '3')
        {
            printf("Three ");
        }
        else if(digits == '4')
        {
            printf("Four ");
        }
        else if(digits == '5')
        {
            printf("Five ");
        }
        else if(digits == '6')
        {
            printf("Six ");
        }
        else if(digits == '7')
        {
            printf("Seven ");
        }
        else if(digits == '8')
        {
            printf("Eight ");
        }
        else if(digits == '9')
        {
            printf("Nine ");
        }
        else if(digits < '0')
        {
            printf("(negative) ");
        }
        else
        {
            printf("Invalid Input! ");
        }
    }
    getch();
    return 0;
}
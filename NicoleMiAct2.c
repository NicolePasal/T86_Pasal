#include <stdio.h>

int main ()
{
    //Problem: A spinning tire makes 3000 revolutions per minutes. Calculate How many degrees it rotate in one second. Then display the degrees.

    int rpm, seconds, degrees, result;
    
    printf("Enter the revolutions per minute: ");
    scanf("%d", &rpm);
    printf("Enter the second per minute: ");
    scanf("%d", &seconds);
    printf("Enter the degree per revolution: ");
    scanf("%d", &degrees);
    
    //solution
    result = rpm / seconds * degrees;
    printf("%d rpm divide %d seconds multiply %d degrees is %d degrees per second", rpm, seconds, degrees, result);
    return 0;
}
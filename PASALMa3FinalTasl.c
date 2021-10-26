#include<stdio.h>

int main()
{
int choice, price, payment, change;

printf("\n    SOFTDRINKS \n   vendo machine");

printf("\nChoose your item:");
printf("\n[1] Pepsi: Php100");
printf("\n[2] Dr.Pepper: Php120");
printf("\n[3] Coca-Cola: Php95\nChoice:  ");
scanf("%d", &choice);

switch (choice){
case 1:
price = 100;
printf("\nInput payment: Php");
scanf("%d", &payment);
if(payment>=price)
{
change = payment - price;
printf("Change: Php%d", change);
printf("\n         Thank you!\nYou have successfully purchased Pepsi\n....Enjoy!");
}
else
{
printf("\nYou don't have enough funds!");
}
break;

case 2:
price = 120;

printf("\nInput Payment: Php");
scanf("%d", &payment);
if(payment>=120)
{
change = payment - price;
printf("Change: Php%d", change);
printf("\n         Thank you!\nYou have successfully purchased Dr.Pepper\n....Enjoy!");
}
else
{
printf("\nYou don't have enough funds!");
}
break;

case 3:
price = 95;

printf("Input payment: Php");
scanf("%d", &payment);
if(payment>=95)
{
change = payment - price;
printf("Change: Php%d", change);
printf("\n         Thank you!\nYou have successfully purchased Coca-Cola\n....Enjoy!");
}
else
{
printf("\nYou don't have enough funds!");
}
break;

default:
printf("\n        Invalid Input!");
}
return 0;
}

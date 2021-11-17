#include<stdio.h>
int main(){
  int n;
  printf("Input Any Positive Integer: ");
  scanf("%d", &n);
  while(n > 1){
    if(n % 2 == 0){ 
      n = n / 2;
      printf("Current Given Value is %d\n", n);
    }
    else
    { 
      n = n * 3 + 1;
      printf("Current given value is %d\n", n);
    }
  }
  return 0;
}
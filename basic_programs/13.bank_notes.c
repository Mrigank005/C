#include <stdio.h>
int main() 
{
  int amt, total;
  printf("Input the amount: ");
  scanf("%d",&amt);
  
  total = (int)amt/500;
  printf("There are:\n");
  printf("%d Note(s) of 500.00\n", total);
  amt = amt-(total*500);
    
  total = (int)amt/100;
  printf("%d Note(s) of 100.00\n", total);
  amt = amt-(total*100);
    
  total = (int)amt/50;
  printf("%d Note(s) of 50.00\n", total);
  amt = amt-(total*50);
    
  total = (int)amt/20;
  printf("%d Note(s) of 20.00\n", total);
  amt = amt-(total*20);
    
  total = (int)amt/10;
  printf("%d Note(s) of 10.00\n", total);
  amt = amt-(total*10);
  
  return 0;
}

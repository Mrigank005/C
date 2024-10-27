#include <stdio.h>
int main() 
{
  int x;
  printf("\nInput an integer: "); 
  scanf("%d", &x);
  
  if(x >=0 && x <= 20) // Check if 'x' is in the range [0, 20]
  {
    printf("Range [0, 20]\n"); // Print message for the first range
  } 
  else if(x >=21 && x <= 40) // Check if 'x' is in the range (21,40]
  {
    printf("Range (21,40]\n"); // Print message for the second range
  } 
  else if(x >=41 && x <= 60) // Check if 'x' is in the range (41,60]
  {
    printf("Range (41,60]\n"); // Print message for the third range
  } 
  else if(x >61 && x <= 80) // Check if 'x' is in the range (61,80]
  {
    printf("Range (61,80]\n"); // Print message for the fourth range
  } 
  else 
  {
    printf("Outside the range\n"); // Print message for values outside of all ranges
  }
  return 0;
}

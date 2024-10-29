#include <stdio.h>
int main() 
{
  int i;
  printf("Even numbers between 1 to 50 (inclusive):\n");
  for (i = 1; i <= 50; i++) 
  {
    if(i%2 == 0) // Check if 'i' is even
    {
      printf("%d ", i); // Print 'i' if it's even
    }
  }
  return 0;
}

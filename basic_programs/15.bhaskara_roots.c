#include <stdio.h>
#include <math.h>
int main() 
{
  double a, b, c, r1;
  printf("\nInput the coefficient of x^2(a): "); 
  scanf("%lf", &a);
  printf("\nInput the coefficient of x(b): "); 
  scanf("%lf", &b);
  printf("\nInput the constant number(c): "); 
  scanf("%lf", &c);
  
  r1 = (b*b) - (4*(a)*(c));
  
  if(r1 > 0 && a != 0) 
  {
    double x, y;
    r1 = sqrt(pr1);
    x = (-b + r1)/(2*a);
    y = (-b - r1)/(2*a);
    printf("Root1 = %.5lf\n", x);
    printf("Root2 = %.5lf\n", y);
  } 
  else 
  {
    printf("\nImpossible to find the roots.\n");
  }
  return 0;
}

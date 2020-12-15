#include <stdio.h>
int main()
{
     int i, Number, Exponent; 
  long Power = 1;
  printf("Enter any Number : ");
  scanf(" %d", &Number);
  printf("Enter the Exponent Vlaue: ");
  scanf(" %d", &Exponent);
  for(i = 1; i <= Exponent; i++)
  {
  	Power = Power * Number;
  }
printf("%d ^ %d = %d", Number, Exponent, Power);
return 0;
}

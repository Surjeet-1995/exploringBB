#include <stdio.h>
int main()
{
int number;

printf ("enter any number you want\n");

scanf ("%d", &number);

printf ("you entered: %d\n", number);

int number2;
printf ("enter second number\n");
scanf ("%d", &number2);

int sum= number * number2;
printf("%d multiply by  %d = %d\n\n", number, number2, sum);
return 0;

}

# include <stdio.h>
# include <math.h>
# include <float.h>
# include <string.h>

int main()
{
float amount;
float iint;
float mint;
float fint;
float oneint;
float onefin;
float twoint;
float twofin;
float threeint;
float threefin;
float mpay;
printf("Enter amount of loan:");
scanf("%f",&amount);
printf("Enter interest rate:");
scanf("%f",&iint);
printf("Enter monthly payment:");
scanf("%f",&mpay);
mint = iint / 12; 
fint = mint / 100; 
//printf("%f", mint);
oneint = amount * fint; 
onefin = (amount + oneint) - mpay;

//second calc

twoint = onefin * fint;
twofin = (onefin + twoint) - mpay;

//third calc

threeint = twofin * fint;
threefin = (twofin + threeint) - mpay;

printf("Balance remaining after first payment: %.2f\n", onefin);
printf("Balance remaining after second payment: %.2f\n", twofin);
printf("Balance remaining after third payment: %.2f\n", threefin);



}

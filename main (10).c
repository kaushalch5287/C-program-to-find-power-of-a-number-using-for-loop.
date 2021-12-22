/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int base, exponent;
 long long power = 1;
 int i;
 printf("Enter base: ");
 scanf("%d", &base);
 printf("Enter exponent: ");
 scanf("%d", &exponent);
 for(i=1; i<=exponent; i++)
 {
 power = power * base;
 }
 printf("%d ^ %d = %lld", base, exponent, power);
 return 0;
}



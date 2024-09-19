#include <stdio.h>
int main(){
float a = 0.1;
float b = 0.2;
int c = 555;
int d = 1004;
int e = 8;
int f = 59;
float out = a + b;

printf("|%d|\n", c);
printf("|%9d|\n",c);
printf("|%-9d|\n",c);
printf("Words: %11d\n", f);
printf("Letters: %9d\n", d);
printf("Digits: %10d\n\n", e);
printf("a = %f; b = %f\n", a,b);
printf("a + b = %.15f\n", out);
} 

#include <stdio.h>
int main(){
double a;
char b;
printf("enter degrees:");
scanf("%le%c", &a, &b);
printf("Input temperature:%2.f\n", a);
if(b=='c'|| b=='C'){
printf("Input temperature:%2.f\n", (a+32)/1.8);
} else if(b=='f'||b=='F'){
printf("Ouput temperature:%2.f\n", (a-32)/1.8);
} else{
printf("Ouput error\n");
}

}

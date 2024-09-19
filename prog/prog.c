#include <stdio.h>
int main (){
int a;
printf("enter year: ");
scanf("%d", &a);
if(a%400==0){
printf("YES");
}else if(a%100==0){
printf("NO");
}else if(a%4==0){
printf ("YES");
}else{
printf ("NO");
}
}

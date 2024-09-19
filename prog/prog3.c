#include <stdio.h>
#include <math.h>
int main() {

float x;
float y;
float r;
printf("Введите значения x и y: ");
scanf("%f %f",&x, &y);

r = (pow(x,2)) + (pow(y,2));

r = pow(r,2);

if (r < 0) {
printf("NO \n");
}

else if (r > 0){
printf("YES \n");
}

else if(r == 0) {
printf("NO \n");
}

}

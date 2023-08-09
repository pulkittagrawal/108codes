#include<stdio.h>
void main() {
float r,aos,vos;
printf("Enter the radius of sphere");
scanf("%f",&r);
aos=4*3.14*r*r;
printf("area of sphere is:%f\n",aos);
vos=(4*3.14*r*r*r)/3;
printf("volume  of sphere is:%f",vos);
}

#include <stdio.h>
void main(){
int i;
float a[7],sum=0,avg;
printf("enter the values\n");
    for(i=0;i<7;i++){
        scanf("%f",&a[i]);
        sum=sum+a[i];
        avg=sum/7;
}
printf("avg: %f \n",avg);
}

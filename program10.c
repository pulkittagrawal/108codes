#include<stdio.h>
void main() {
    float a,b,c;
    printf("enter the value of a and b :");
    scanf ("%f%f",&a,&b);
    c=(a/b)*100;
    printf("%.0f is %.2f%% of %.0f ",a,c,b);                // .0 .2 .0 (% ke point ke bad number utne decimal places tak batata hai) // %%(Double percentage is used to introduce percent symbol)
}

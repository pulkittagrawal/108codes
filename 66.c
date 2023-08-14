#include <stdio.h>
void main() {
   int n,x=0,y=0;
    // input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    // input the array
    int a[n];
    printf("Enter an array: ");
    for (int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    // check 0 and 1
    for (int i = 0; i< n; i++){
        if(a[i]==1){
                 x++;}
                 
        if(a[i]==0){
                 y++;}
                 
    }
   printf("element 1's is: %d\n",x);
   printf("element 0's is: %d ",y);
}

#include <stdio.h>
void main() {
   int n,count=0,x;
    // input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    // input the array
    int a[n];
    printf("Enter an array: ");
    for (int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    // found element
    printf("Enter the element in the array which you have to find: ");
    scanf("%d", &x);
    // check 0 and 1
    for (int i = 0; i< n; i++){
        if(a[i]==x){
            printf("the position of %d is %d\n",x,i+1);
            count++;
        }
    }
    if(count==0){
        printf("element not found");
        goto end;
    }
   printf("repeated:%d times",count);
    end:
    
}

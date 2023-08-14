#include <stdio.h>
void main() {
   int n;
    // input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    // input the array
    int a[n];
    
    printf("Enter an array: ");
    for (int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
 // Printing the reverse of the array
    printf("Reversed array: ");
    for (int i = n-1; i>=0; i--){
        printf("%d ", a[i]);
    }
 }

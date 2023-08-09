#include<stdio.h>

int main() {
    
    char i;
    printf("Value of a is: ");
    
    scanf("%c",&i);
   
    if((i>='a' && i<='z') || (i>='A' && i<='Z'))
        printf("It is an alphabet.");
    else
        printf("It is a digit.");
    
    return 0;
}

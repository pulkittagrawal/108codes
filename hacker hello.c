#include <stdio.h>

int main() {

    char c[100];
        
    scanf("%[^\n]%*c", c);
    
    printf("Hello World\n%s", c);
        
    return 0;
}

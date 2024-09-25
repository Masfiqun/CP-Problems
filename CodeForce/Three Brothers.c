#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    int lateBrother = 6 - (a + b);
    
    printf("%d\n", lateBrother);
    
    return 0;
}

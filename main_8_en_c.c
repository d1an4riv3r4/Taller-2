#include <stdio.h>

int main() {
    int a = 1;
    double d = 1.0;

    
    a = 46 % 9 + 4 * 4 - 2;
    printf("Expresion 1 - a: %d\n", a);

    
    a = 45 + 43 % 5 * (23 * 3 % 2);
    printf("Expresion 2 - a: %d\n", a);

    
    a = 45 + 45 * 50 % (a--);
    printf("Expresion 3 - a: %d\n", a);

     
    d = 1.5 * 3 + (++d);
    printf("Expresion 4 - d: %.2f\n", d);

    
    d = 1.5 * 3 + (d++);
    printf("Expresion 5 - d: %.2f\n", d);
    
    a %= 3 / a + 3;
    printf("Expresion 6 - a: %d\n", a);

    return 0;
}

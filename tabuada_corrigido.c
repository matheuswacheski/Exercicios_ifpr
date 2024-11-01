#include <stdio.h>

int main() {
    int i, j; 
    for (i = 1; i <= 10; i++) { 
        for (j = 0; j <= 10; j++) { 
            printf("%i x %i = %i\n", i, j, i * j);
            if (j == 10) printf("\n"); 
    }
    return 0; 
}

#include <stdio.h>
#include <math.h>

int main() {
    int max_lado = 20;  // Límite superior para los valores de los lados a y b

    // Posibles valores para 'a'
    for (int a = 1; a <= max_lado; a++) {
        // Posibles valores para 'b', comenzando desde 'a'
        for (int b = a; b <= max_lado; b++) {
            double c = sqrt(a * a + b * b);  // Calculamos 'c' como raíz cuadrada de a^2 + b^2


            if (c == (int)c) {
                // La suma de cualquier par de lados debe ser mayor que el tercer lado
                if (a + b > c && a + c > b && b + c > a) {
                    printf("Triple pitagórico: %d - %d - %d\n", a, b, (int)c);
                }
            }
        }
    }

    return 0;
}



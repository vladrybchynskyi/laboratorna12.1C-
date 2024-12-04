#include <stdio.h>
#include <math.h>

// Макрос для визначення квадрату числа
#define SQR(x) ((x) * (x))

// Макрос для визначення мінімуму двох чисел
#define MIN(y, z) ((y) < (z) ? (y) : (z))

// Макрос для визначення максимуму двох чисел
#define MAX(y, z) ((y) > (z) ? (y) : (z))

// Макрос для обчислення модуля (абсолютного значення)
#define ABS(x) ((x) < 0 ? -(x) : (x))

// Макроси для виведення результатів
#define PRINTI(w) puts("Control output:"); \
    printf(#w " = %d\n", w)

#define PRINTR(w) puts("Result:"); \
    printf(#w " = %f\n", (float)(w))

int main() {
    puts("Lab: Using macros and preprocessing directives");
    float x, y, z, w;
    char ch;

    do {
        puts("Input values for x, y, z:");
        scanf("%f %f %f", &x, &y, &z);

        if (z >= 1 && z < 10) {
            // Обчислення w = min^2(x + y, x + z)
            float minValue = MIN(x + y, x + z);
            w = SQR(minValue);
            PRINTR(w);
        } else if (z < 1 || z >= 10) {
            // Обчислення w = max(x^2, 5)|y - z|
            w = MAX(SQR(x), 5) * ABS(y - z);
            PRINTR(w);
        } else {
            puts("Invalid value for z.");
        }

        puts("Repeat? y/n");
        getchar(); // Очистити вхідний буфер після scanf()
        ch = getchar(); // Очікування символу
    } while (ch == 'y');

    return 0;
}
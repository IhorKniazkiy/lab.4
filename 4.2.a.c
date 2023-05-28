#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 10; i < 100; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    printf("Сума чисел, кратних 3, у діапазоні від 10 до 100 (не включно): %d\n", sum);

    return 0;
}
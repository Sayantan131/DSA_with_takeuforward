#include <stdio.h>

int main() {
    int number = 12345;
    char str[20];  // Make sure the array is large enough to hold the resulting string

    // Using snprintf for safety
    snprintf(str, sizeof(str), "%d", number);

    printf("Converted string: %s\n", str);

    return 0;
}

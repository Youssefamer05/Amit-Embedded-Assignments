#include <stdio.h>

int main() {
    int number, n, toggledNum;

    printf("Enter any number:");
    scanf("%d", &number);

    printf("Enter nth bit to toggle (0-31):");
    scanf("%d", &n);

    toggledNum = number ^ (1 << n);

    printf("Bit toggled successfully.\n");
    printf("Number before toggling %d bit: %d (in decimal)\n", n, number);
    printf("Number after toggling %d bit: %d (in decimal)\n", n, toggledNum);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int computerAmount, peripheralCount;
    char serviceTime, dropOff;
    float baseFee, additionalFee, totalFee;
    printf("=== COMPUTER SERVICE FEE CALCULATOR ===\n\n");
    printf("Number of computers  : "); scanf("%d", &computerAmount);
    printf("Number of peripherals: "); scanf("%d", &peripheralCount);
    printf("Is service in business hours? (Y/N): "); scanf(" %c", &serviceTime);
    printf("Is customer willing to drop off and pick up? (Y/N): "); scanf(" %c", &dropOff);
    printf("\n");
    if (computerAmount == 1 || computerAmount == 2) {
        baseFee       = 50;
        additionalFee = 0;
    } else if (computerAmount >= 3 && computerAmount <= 10) {
        baseFee       = 100;
        additionalFee = 10 * peripheralCount;
    } else {
        baseFee       = 500;
        additionalFee = 10 * peripheralCount;
    }
    if (serviceTime == 'N' || serviceTime == 'n')
        baseFee = baseFee * 2;
    if (dropOff == 'Y' || dropOff == 'y')
        baseFee = baseFee / 2;
    totalFee = baseFee + additionalFee;
    printf("--- FEE DETAILS ---\n");
    printf("Base Fee       : $%.2f\n", baseFee);
    printf("Additional Fee : $%.2f\n", additionalFee);
    printf("TOTAL FEE      : $%.2f\n", totalFee);

    return 0;
}

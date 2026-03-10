#include <stdio.h>
#include <string.h>

int main() {
    char accountNumber[10];
    float amountOfSale;
    int found = 0;
    int validStatus = 0;
    int i;

    char accNum[5][10]    = {"ACC001", "ACC002", "ACC003", "ACC004", "ACC005"};
    char accStatus[5][10] = {"valid", "valid", "invalid", "valid", "invalid"};
    char accName[5][50]   = {"Budi Santoso", "Siti Rahayu", "Andi Wijaya", "Dewi Lestari", "Reza Pratama"};

    printf("=== ACCOUNT VALIDATION & INVOICE SYSTEM ===\n\n");
    printf("Available Accounts: ACC001, ACC002, ACC003, ACC004, ACC005\n\n");
    printf("Enter Account Number : "); scanf("%s", accountNumber);
    printf("Enter Amount of Sale : $"); scanf("%f", &amountOfSale);
    printf("\n");

    for (i = 0; i < 5; i++) {
        if (strcmp(accNum[i], accountNumber) == 0) {
            found = 1;
            if (strcmp(accStatus[i], "valid") == 0) {
                validStatus = 1;
                printf("============ INVOICE ============\n");
                printf("Account Number : %s\n", accNum[i]);
                printf("Customer Name  : %s\n", accName[i]);
                printf("Amount of Sale : $%.2f\n", amountOfSale);
                printf("Status         : VALID\n");
                printf("=================================\n");
            }
            break;
        }
    }

    if (!found)
        printf("ERROR: Account number \"%s\" not found in ACCOUNTS.\n", accountNumber);
    else if (!validStatus)
        printf("ERROR: Account \"%s\" found, but status-code is NOT VALID.\n", accountNumber);

    return 0;
}

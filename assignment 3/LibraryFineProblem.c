#include <stdio.h>

int main() {
    int days, paise_total = 0, rupees_total = 0;

    // Input: Taking days, paise, and rupees as input
    scanf("%d %d %d", &days, &paise_total, &rupees_total);

    // Calculate total amount based on different ranges of days
    if (days >= 1 && days <= 5) {
        for (int i = 1; i <= days; i++) {
            paise_total = 50 + paise_total;
        }
    } else if (days >= 6 && days <= 10) {
        for (int i = 1; i <= 5; i++) {
            paise_total = 50 + paise_total;
        } 
        for (int i = 6; i <= days; i++) {
            rupees_total = 1 + rupees_total;
        }
    } else {
        for (int i = 1; i <= 5; i++) {
            paise_total = 50 + paise_total;
        } 
        for (int i = 6; i <= 10; i++) {
            rupees_total = 1 + rupees_total;
        }
        for (int i = 11; i <= days; i++) {
            rupees_total = 10 + rupees_total;
        }
    }

    // Output: Print the total amount in rupees and paise
    printf("Amount to be paid is %d rupees and %d paise", rupees_total, paise_total);

    return 0;
}
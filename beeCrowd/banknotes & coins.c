/*beecrowd | 1021
Banknotes and Coins
By Neilor Tonin, URI  Brazil

Timelimit: 1
Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

Input
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output
Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.
*/

#include <stdio.h>

int main() {
    double value;
    int notes[6] = {100, 50, 20, 10, 5, 2};
    double coins[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int note_count[6] = {0};
    int coin_count[6] = {0};

    // Step 1: Read the monetary value
    printf("Enter the monetary value: ");
    scanf("%lf", &value);

    // Step 2: Calculate the number of each denomination of notes and coins
    for (int i = 0; i < 6; i++) {
        while (value >= notes[i]) {
            note_count[i]++;
            value -= notes[i];
        }
    }
    for (int i = 0; i < 6; i++) {
        while (value >= coins[i]) {
            coin_count[i]++;
            value -= coins[i];
        }
    }

    // Step 3: Print the breakdown of notes and coins
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %.2lf\n", note_count[i], notes[i] * 1.00);
    }
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %.2lf\n", coin_count[i], coins[i]);
    }

    return 0;
}

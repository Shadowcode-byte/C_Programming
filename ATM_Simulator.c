#include <stdio.h>
#include <string.h>

float balance = 10000.00;  
char transactions[5][50];  
int count = 0;             


void addTransaction(char msg[]) {
    if (count < 5) {
        strcpy(transactions[count], msg);
        count++;
    } else {
      
        int i;
        for (i = 0; i < 4; i++) {
            strcpy(transactions[i], transactions[i + 1]);
        }
        strcpy(transactions[4], msg);
    }
}


void showTransactions() {
    int i;
    printf("\n--- Last Transactions ---\n");
    if (count == 0) {
        printf("No transactions yet.\n");
    } else {
        for (i = 0; i < count; i++) {
            printf("%d. %s\n", i + 1, transactions[i]);
        }
    }
}


void withdrawMoney() {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrawal successful!\n");
        char msg[50];
        sprintf(msg, "Withdrew %.2f", amount);
        addTransaction(msg);
    } else {
        printf("Insufficient balance or invalid amount!\n");
        addTransaction("Failed withdrawal");
    }

    printf("Current Balance: %.2f\n", balance);
}


void depositMoney() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Deposit successful!\n");
        char msg[50];
        sprintf(msg, "Deposited %.2f", amount);
        addTransaction(msg);
    } else {
        printf("Invalid amount!\n");
    }

    printf("Current Balance: %.2f\n", balance);
}


void showBalance() {
    printf("Your balance is: %.2f\n", balance);
}


void atmMenu() {
    int choice;

    while (1) {
        printf("\n==== ATM MENU ====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Show Last Transactions\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            showBalance();
        } else if (choice == 2) {
            depositMoney();
        } else if (choice == 3) {
            withdrawMoney();
        } else if (choice == 4) {
            showTransactions();
        } else if (choice == 5) {
            printf("Thank you for using ATM!\n");
            showTransactions();
            printf("Final Balance: %.2f\n", balance);
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
}

int main() {
    printf("Welcome to Simple ATM Simulator\n");
    atmMenu();
    return 0;
}

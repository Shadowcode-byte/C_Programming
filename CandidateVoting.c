#include <stdio.h>

int main() {
    int choice;
    int x = 0, y = 0, z= 0;

    printf("---- Voting Poll ----\n");
    printf("Candidates:\n");
    printf("1. X\n");
    printf("2. Y\n");
    printf("3. Z\n");
    printf("\nEnter your vote (1/2/3): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            x+=1;
            printf("You voted for Candidate X\n");
            break;
        case 2:
            y+=1;
            printf("You voted for Candidate Y\n");
            break;
        case 3:
            z+=1;
            printf("You voted for Candidate Z\n");
            break;
        default:
            printf("Invalid choice! No vote counted.\n");
            break;
    }
    

    printf("\n--- Result ---\n");
    switch(choice) {
        case 1:
            printf("Candidate X Wins!\n");
            break;
        case 2:
            printf("Candidate Y Wins!\n");
            break;
        case 3:
            printf("Candidate Z Wins!\n");
            break;
        default:
            printf("No winner.\n");
            printf("\n--- Voting Results ---\n");
    printf("Candidate X: %d votes\n", x);
    printf("Candidate Y: %d votes\n", y);
    printf("Candidate Z: %d votes\n", z);
            break;
            
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int choice, vote1 = 0, vote2 = 0, vote3 = 0;
    char voterID[20];
    int totalVotes = 0;

    while (1) {
        printf("\n---- ONLINE VOTING SYSTEM ----\n");
        printf("1. Vote\n");
        printf("2. View Results\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter Voter ID: ");
            scanf("%s", voterID);

            printf("\nChoose Candidate:\n");
            printf("1. Candidate A\n");
            printf("2. Candidate B\n");
            printf("3. Candidate C\n");
            printf("Enter your vote: ");
            scanf("%d", &choice);

            if (choice == 1) {
                vote1++;
                totalVotes++;
                printf("Vote recorded for Candidate A\n");
            } 
            else if (choice == 2) {
                vote2++;
                totalVotes++;
                printf("Vote recorded for Candidate B\n");
            } 
            else if (choice == 3) {
                vote3++;
                totalVotes++;
                printf("Vote recorded for Candidate C\n");
            } 
            else {
                printf("Invalid vote\n");
            }
        }
        else if (choice == 2) {
            printf("\n---- RESULTS ----\n");
            printf("Candidate A: %d votes\n", vote1);
            printf("Candidate B: %d votes\n", vote2);
            printf("Candidate C: %d votes\n", vote3);
            printf("Total Votes: %d\n", totalVotes);
        }
        else if (choice == 3) {
            printf("Exiting...\n");
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}

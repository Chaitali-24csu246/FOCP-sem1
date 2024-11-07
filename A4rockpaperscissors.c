#include <stdio.h>
#include <stdlib.h>  // for rand()
//ROCK PAPER SCISSORS
int main() {
    int uchoice, cchoice, upoint = 0, cpoint = 0, rounds;
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("How many rounds do you want to play? ");
    scanf("%d", &rounds);

    for (int i = 0; i < rounds; i++) {
        printf("\nRound %d\n", i + 1);
        printf("START PLAYING \nPick (1 for Rock, 2 for Paper, 3 for Scissors): ");
        scanf("%d", &uchoice);

        if (uchoice < 1 || uchoice > 3) {
            printf("Invalid choice! Please choose 1 for Rock, 2 for Paper, or 3 for Scissors.\n");
            i--;
            continue;
        }
        cchoice = rand() % 101;
        if (cchoice >= 0 && cchoice <= 33) {
            cchoice = 1; 
        } else if (cchoice >= 34 && cchoice <= 66) {
            cchoice = 2;  
        } else {
            cchoice = 3; 
        }
        if (cchoice==1){
            printf("Computer chose rock\n");
        }else if (cchoice ==2){
            printf("Computer chose paper\n");
        } else{
            printf("Computer chose scissors\n");
        }
        if(uchoice ==cchoice) {
        printf("You have tied!!\n");
        } else if ((uchoice == 1 && cchoice == 3) || (uchoice == 2 && cchoice == 1) || (uchoice == 3 && cchoice == 2)) {
            printf("You win this round!\n");
            upoint++;  
        }else{
            printf("Computer wins this round!\n");
            cpoint++;  
        }}
    printf("\nFinal score: You = %d, Computer = %d\n", upoint, cpoint);
    if (upoint > cpoint) {
        printf("Congratulations! You've won!\n");
    } else if (upoint < cpoint) {
        printf("Computer wins ! Better luck next time...\n");
    } else {
        printf("It's a tie! You were evenly matched.\n");
    }
    return 0;
}

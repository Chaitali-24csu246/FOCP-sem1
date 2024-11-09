#include <stdio.h>
#include <string.h>
#include <ctype.h>//using for uppercase and lowercase consistency
void printInstructions();
void displayWord(char word[], char guess[], int wordLength);
int isLetterInWord(char letter, char word[], int wordLength);
void toLowerCase(char word[], int length);
int main() {
    char word[100],hint[100],  guessWord[100];//giving a maximum length to reduce complexity
    char guess;
    int tries=10, wordLength;
    int gameOver=0;
    printInstructions();

    printf("Player 1, enter a word: ");
    gets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0;  // Removing newline character as it caused errors

    printf("Player 1, enter a hint: ");
    gets(hint, sizeof(hint), stdin);
    hint[strcspn(hint, "\n")] = 0;  // rmove newline 
    // lowercase uppercase
    toLowerCase(word, strlen(word));
    // Creating guessword
    wordLength=strlen(word);
    for (int i=0;i<wordLength;i++) {
        if (strchr("aeiou", word[i])) {
            guessWord[i] = word[i];  // show vowels
        } else {
            guessWord[i] = '_';  // Hide consonants
        }
    }
    guessWord[wordLength] = '\0';  //terminate the guess word with null

    // Game loop
    while (!gameOver && tries > 0) {
        printf("\nCurrent word: ");
        displayWord(word, guessWord, wordLength); 

        printf("\nPlayer 2, you have %d tries left.\n", tries);
        printf("Do you want a hint (h), guess a letter (l), or guess the word (w)? ");
        char choice;
        scanf(" %c", &choice);  
        choice = tolower(choice);  // Convert choice to lowercase for error handling
        if (choice == 'h') {
            // Hint reduces one try
        printf("Hint: %s\n", hint);
        tries--;  
        } else if (choice == 'l') {
            printf("Enter a letter: ");
            scanf(" %c", &guess);
            guess = tolower(guess);  
            // Check if letter is in the word
            int found = 0;
            for (int i = 0; i < wordLength; i++) {
                if (word[i] == guess) {
                    guessWord[i] = guess;  // Update guessWord 
                    found = 1;
    }
            }
            if (found) {
                printf("Correct guess!\n");
            } else {
                printf("Wrong guess!\n");
            }
            // Deduct one try 
            tries--; }  else if(choice=='w'){
            //  guesses the whole word
            printf("Guess the word: ");
            char playerGuess[100];
            scanf("%s", playerGuess);
            toLowerCase(playerGuess, strlen(playerGuess));
            if (strcmp(playerGuess, word) == 0) {
                printf("Correct! Player 2 wins!\n");
                gameOver = 1;  // End the game 
                printf("Wrong guess! Try again.\n");
            }

            tries--;
        } else {
            printf("Invalid choice! Please choose 'h', 'l', or 'w'.\n");}
        if (strcmp(word, guessWord) == 0) {
            printf("Congratulations! Player 2 guessed the word correctly.\n");
            gameOver = 1;}}
    if (!gameOver) {//!ameover=gameover!=1 false codition
        printf("Player 1 wins! Player 2 ran out of tries.\n");
    }
    return 0;
}
void printInstructions() {
    printf("Welcome to Hangman!\n");
    printf("Player 1 will provide a word and a hint. \nplayer 2 will try to guess the word.\n");
    printf("The word will be partially displayed \n Plyer 2 can guess a letter, a word, or ask for a hint.\n");
    printf("You have 10 tries to guess the word correctly.\n If Player  two uses a hint, one try is deductd.\n");
    printf("Good luck!\n");
}
// Function to display the current state 
void displayWord (char word[],char guess[], int wordLength){
    for(int i=0;i<wordLength;i++){
        if (guess[i] == '_') {
            printf("_ ");
        } else {
printf("%c ", guess[i]);}}
    printf("\n");}

// Function to check if a guessed letter is in the word
int isLetterInWord(char letter, char word[], int wordLength) {
    for (int i = 0; i < wordLength; i++) {
        if (word[i] == letter) {
            return 1;  // Letter found 
            }}
    return 0;  // Letter not found
}// convert a string to lowercase
void toLowerCase(char word[], int length) {
for (int i=0;i<length; i++) {
        word[i] = tolower(word[i]);}}

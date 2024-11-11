#include <stdio.h>
#include <string.h>
#include <ctype.h>
void tlc(char word[], int length) {
    int i;
    for (i = 0; i < length; i++) {
        word[i] = tolower(word[i]);
    }
}
int display(char word[], int len, int nums[]) {
    int i, n = 0;
    for (i = 0; i < len; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'o' || word[i] == 'i' || word[i] == 'u' || nums[i] == 1) {
            printf("%c", word[i]);
            n++;
        } else {
            printf("_ ");
        }
    }
    printf("\n");
    return n;
}

int allLettersGuessed(int nums[], int len) {
    for (int i = 0; i < len; i++) {
        if (nums[i] == 0) {
            return 0;
        }
    }
    return 1;
}

void game(char word[], int len, char hint[], int nums[]) {
    int i, choice, y, flag = 1, p = 0;
    char guess[len + 1], w;

    for (i = 1; i <= 10 && flag == 1; i++) {
        printf("Attempt number %d\n", i);
        printf("Choose an option:\n 1) Guess word\n 2) Get hint\n 3) Guess a letter\n");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) { 
            printf("Enter your guess: ");
            fgets(guess, len + 1, stdin);
            guess[strcspn(guess, "\n")] = '\0';

            if (strcmp(word, guess) == 0) {
                printf("Correct guess, you win!\n");
                flag = 0;
                break;
            } else {
                printf("Incorrect guess.\n");
            }

        } else if (choice == 2) { 
            printf("Hint: %s\n", hint);

        } else if (choice == 3) { 
            printf("Guess a letter: ");
            scanf(" %c", &w);
            w = tolower(w);
            int found = 0;

            for (y = 0; y < len; y++) {
                if (word[y] == w) {
                    nums[y] = 1;
                    found = 1;
                }
            }
            if (found == 1) {
                printf("Correctly guessed letter!\n");
                if (display(word, len, nums) == len) {
                    printf("Game won. You guessed it!\n");
                    flag = 0;
                    break;
                }
            } else {
                printf("Letter not in word.\n");
            }
        } else { 
            printf("Invalid input, please choose 1, 2, or 3.\n");
            i--;
            continue;
        }

        display(word, len, nums);

        if (allLettersGuessed(nums, len)) {
            printf("Congratulations, you've guessed the word!\n");
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("Out of attempts! The word was: %s\n", word);
    }
}

int main() {
    int len;
    printf("Welcome to Hangman!\nPlayer 1 provides a word and a hint.\nPlayer will try to guess the word.\nOnly vowels are shown initially.\nPlayer 2 can guess letters, the word, or ask for a hint.\nNote: Do not include spaces or newlines in the word\nTry to enter all values in lowercase as upper case occasionally gives error");

    printf("\nPlayer 1, enter the number of characters in the word: ");
    scanf("%d", &len); getchar();
    char word[len + 1], hint[100];
    int nums[len];
    memset(nums, 0, sizeof(nums));  
    printf("Enter the word: ");
    fgets(word, len + 1, stdin);
    word[strcspn(word, "\n")] = '\0';
    printf("Enter a hint: "); getchar();
    fgets(hint, sizeof(hint), stdin);
    hint[strcspn(hint, "\n")] = '\0';
    tlc(word, len);
    printf("Now it's Player 2's turn.\n");
    display(word, len, nums);
    game(word, len, hint, nums);

    return 0;
}


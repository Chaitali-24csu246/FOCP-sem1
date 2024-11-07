#include <stdio.h>
#include <stdlib.h>//to use randfunction
#include <ctype.h> //for checking characters
char board[3][3] ={{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
char player='X';
void displayBoard() {
printf("\n");
for (int i = 0;i<3;i++) {
for (int j=0; j< 3; j++) {
 printf(" %c ",board[i][j]);
 if (j <2) {
 printf("|");
}}if (i<2) {
 printf("\n-----------\n");
} else{
printf("\n");
}}}
//Will use concept of return for functions as taught during induction sessions to simplify program
int checkWin() {
 for(int i=0; i<3;i++){
if(board[i][0]==board[i][1] && board[i][1]==board[i][2]){

 return 1;}
if (board[0][i]==board[1][i] && board[1][i]==board[2][i]){

 return 1;
 }}
if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
 return 1;}
if(board[0][2]==board[1][1] && board[1][1]==board[2][0]){
return 1;}
return 0;
}
int checkDraw(){
for (int i=0; i<3;i++){
for (int j=0; j<3;j++){
if (board[i][j] !='X' && board[i][j]!= 'O') {
 return 0;
}}}
return 1;
}
int main(){
 int move;
 char choice;
 printf("Welcome to tic-tac-toe\n");
printf("The rules are simple: \n You will be playing against the computer\n Enter the alphabet for  where you want to place your token on the matrice \n The computer will then do the same\n First to get three in a line wins\n Let's get started!!!!\n");
printf("\nYou are Player X.\n");
displayBoard();
while (1<2) {
 printf("Player %c's turn: ",player);
 scanf("%c", &choice);
choice =tolower(choice);
int row=(choice-'a')/3;
 int col=(choice-'a')%3;
if(choice<'a' || choice >'i'){
 printf("Invalid input. Please enter a letter between 'a' and 'i'.\n");
 continue;
 }
 if (board[row][col]!='X' && board[row][col]!='O'){
 board[row][col] = player;
 displayBoard();
if (checkWin()) {
 printf("Player %c wins!\n", player);
 break;
}
if (checkDraw()) {
 printf("It's a draw!\n");
 break;
}
player = 'O';
printf("Player O's move:\n");
do {
row=rand() % 3;
col=rand() % 3;
} while (board[row][col]!='a' && board[row][col]!='b' && board[row][col]!='c' &&
board[row][col] !='d' && board[row][col]!='e' && board[row][col] != 'f' &&
board[row][col]!='g' && board[row][col] != 'h'&& board[row][col] !='i');
 board[row][col]=player;
displayBoard();
 if(checkWin()!=0) {
printf("Computer wins!\n");
 break;
} if (checkDraw()!=0) {
 printf("It's a draw!\n");
break;}
player = 'X';
} else {
printf("Space already taken. Try again.\n");
 continue;}}
 return 0;
}

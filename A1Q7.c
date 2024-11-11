//A1 Q7 CONVERSIONS
#include <stdio.h>
#include <math.h>
int bintodec(int n){
  int decimal=0, i=0, remainder;
  while(n!=0){
    remainder=n%10;
    n/=10;
    decimal+=remainder*pow(2, i);
    i++;
  }
  return decimal;
}
int dectobin(int n) {
  int binary=0, i=1,remainder;
  while(n!=0){
    remainder=n%2;
    n/=2;
    binary+=remainder*i;
    i*=10;
  }
  return binary;
}
int main() {
  int num, choice;
  printf("program can't handle larger numbers\n");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Enter 1 for binary to decimal conversion or 2 for decimal to binary conversion: ");
  scanf("%d", &choice);
  if (choice==1){
    printf("Decimal equivalent of %d is %d\n", num, bintodec(num));
  }else if (choice == 2){
    printf("Binary equivalent of %d is %d\n", num, dectobin(num));
  } else {
    printf("Invalid choice\n");
  }
  return 0;
}

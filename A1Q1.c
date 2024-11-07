//ASSIGNMENT Q1 ARMSTRONG NUMBER PROGRAM
#include <stdio.h>
#include <math.h>
int len(int a) {
    int l=0;
    if (a<0){
        a=-a;
    }
    do{
        l++;
        a/=10;
    } while(a!=0);
    return l;
}
void arm(int a) {
    int orig = a, i;
    int num = len(a);
    int sum = 0;
    if (a < 0) {
        printf("Negative numbers are not Armstrong numbers\n");
    }
else{
    for (i =0; i <num;i++) {
        int d= a % 10;
        sum+= pow(d, num);
        a /= 10;
    }
    if (sum==orig) {
        printf("Number is an Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }}
}

int main() {
    int a;
    do {
        printf("Give a number: ");
        scanf("%d", &a);
        if (a<0) {
            printf("Negative numbers are not Armstrong numbers. Please try again.\n");
        }
    } while (a< 0);
    arm(a);
    return 0;
}

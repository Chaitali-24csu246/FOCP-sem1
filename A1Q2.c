//ASSIGNMENT 1 Q2 HCF PROGRAM
#include <stdio.h>
int hcf(int a,int b) {
    int i,z;
    for (i=a;i>=1;i--) {
        if (a<b) {
            z=i;
            if (a%i==0 && b%i==0) {
                break;
            }
        } else {
            for (i=b;i>=1;i--){
                z=1;
                if (a%i==0 && b%i==0) {
                    break;
                }
            }
        }
    }
    return z;
}
int main() {
    int a, b;
    printf("Give number 1: ");
    scanf("%d", &a);
    printf("Give number 2: ");
    scanf("%d", &b);
    printf("HCF is %d", hcf(a,b));
    return 0;
}

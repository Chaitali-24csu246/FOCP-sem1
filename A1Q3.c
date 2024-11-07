#include <stdio.h>

  // Subtraction without using the minus operator
int main() {
    int n1, n2, res;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    res= n1+(~n2+1);
    printf("The difference is: %d\n", res);
    return 0;
}

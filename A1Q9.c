//ASSIGNMENT 1 Q9 PATTERN PRINTING
#include <stdio.h>
int main(){
    int i,j,n;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(j%2==0)
            printf("1");
            else
            printf("0");
        }
        for(j=5;j>=i;j--){
            printf(" ");
        }
        for(n=5;n>=i;n--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(j%2==0)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }

    return 0;
}

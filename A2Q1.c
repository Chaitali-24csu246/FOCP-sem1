// ASSIGNMENT 2 Q1 UPDATE BY INCREASING 5 MARKS AND PRINT ARRAY
#include <stdio.h>
int main() {
    int len;
    printf("Enter number of students");
    scanf("%d",&len);
    float stmarks[len],m; 
    int a=0;
    for(a=0;a<len;a++){
        printf("Enter marks of student %d: ",a+1);
        scanf("%f",&m);
        stmarks[a]=m+5;
    }
    printf("UPDATED LIST IS:");
    for(a=0;a<len;a++){
        printf("%f\n",stmarks[a]);
    }
    return 0;
}

//ASSIGNMENT 2 Q7 EVEN ODD CRITERIA
#include <stdio.h>
float average(float marks[], int len) {
    int i;
    float sum = 0;
    float avg;
    for(i=0;i<len;i++){
        if ((int)marks[i]%2==0)
            printf("Score at index %d is even\n", i);
        else
            printf("Score at index %d is odd\n", i);
        sum+=marks[i]; 
    }
    avg=sum/len;
    if ((int)avg%2 == 0)
        printf("Average score is even\n");
    else
        printf("Average score is odd\n");

    return avg; 
}
int main() {
    int len,i,m;
    printf("Enter number of students: ");
    scanf("%d", &len);
    
    if (len <= 0) {
        printf("Number of students must be greater than zero.\n");
    }else{
    float marks[len]; 
    for(i=0;i<len;i++){
    printf("Enter marks for %d student:\n", i+1);
    scanf("%f",&m);
        marks[i]=m;
    }
    printf("AVERAGE MARKS ARE %.2f\n", average(marks, len)); 
}
    return 0;
}

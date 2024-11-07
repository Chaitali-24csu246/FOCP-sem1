// ASSIGNMENT 2 Q6 AVERAGE MARKS
#include <stdio.h>
float average(float marks[], int len){
    int i;
    float avg,k=0;
    for(i=0; i<len; i++){
            k+=marks[i];
    }
    avg=k/len;
    return avg;
}
int main(){
    int len;
    printf("Enter number of students: ");
    scanf("%d", &len);
    float stmarks[len], m; 
    int a = 0;
    for(a = 0; a < len; a++){
        printf("Enter marks of student %d: ", a + 1);
        scanf("%f", &m);
        stmarks[a] = m;
    }
    printf("AVERAGE MARKS ARE %f",average(stmarks, len)); 
    return 0;
}

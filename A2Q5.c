//ASSIGNMENT 2 Q5 SUM OF MARKS
#include <stdio.h>
float marks(float marks[], int len){
    int i;
    float k=0;
    for(i=0; i<len; i++){
            k+=marks[i];
    }
    return k;
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
    printf("TOTAL MARKS ARE %f",marks(stmarks, len)); 
    return 0;
}

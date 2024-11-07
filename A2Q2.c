// ASSIGNMENT 2 Q2 GRADE PRINTING
#include <stdio.h>
void grade(float marks[], int len){
    int i;
    for(i=0;i<len;i++){
        if(marks[i]>=75)
            printf("Grade of marks %f is A\n", marks[i]);
        else if(marks[i]>=60)
            printf("Grade of marks %f is B\n", marks[i]);
        else if(marks[i]>=40)
            printf("Grade of marks %f is C\n", marks[i]);
        else
            printf("Grade of marks %f is D\n", marks[i]);
    }
}
int main(){
    //QUESTION REQUIRES OPERATION TO BE PERFORMED ON EXISTING ARRAY SO IT HASN'T BEEN TAKEN AS INPUT FROM THE USER
    float marks[] = {82.5, 67.0, 48.5, 39.0, 90.0};
    int len = sizeof(marks) / sizeof(marks[0]);
    grade(marks, len);
    return 0;
}

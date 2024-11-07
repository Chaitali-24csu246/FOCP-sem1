//ASSIGNMENT 2 Q8 MIN AND MAX
// minimum and maximum marks in an array
#include <stdio.h>
void minmax(float marks[], int len) {
    float min=marks[0]; 
    float max=marks[0]; 
    for(int i=1; i<len; i++) { 
        if (marks[i] < min) {
            min = marks[i]; 
        }
        if (marks[i] > max) {
            max = marks[i]; 
        }
    }
    printf("Minimum marks are: %f\n",min);
    printf("Maximum marks are: %f\n",max);
}

int main() {
    int len,i;
    float m;
    printf("Enter number of students: ");
    scanf("%d", &len);
    if (len<=0) {
        printf("Number of students must be greater than zero.\n");
    }else{
        float marks[len];
        for(i=0; i<len; i++) {
            printf("Enter marks for student %d:\n", i+1);
            scanf("%f", &m);
            marks[i]=m;
        }
        minmax(marks,len);
    }
    return 0;
}

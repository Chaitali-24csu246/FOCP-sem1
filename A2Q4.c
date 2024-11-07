// ASSIGNMENT 2 Q4 COUNT STUDENTS WHO HAVE 99 MARKS IN AN ARRAY
#include <stdio.h>
void f9(float marks[], int len){
    int i,k=0;
    for(i=0; i<len; i++){
        if(marks[i]==99){
            k+=1;
        }
    }
    if(k!=0){
        int numlist[k], n=0;
        for(i=0;i<len; i++){
            if(marks[i]==99){
                numlist[n]=i+1;
                n++;
            }
        }
        printf("Number of 99s in array is %d", k);
        printf("\n AT POSITIONS: \n");
        for(i=0;i<k;i++){
            printf("%d\n", numlist[i]);
        }
    } else {
        printf("No 99s in array");
    }
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
    f9(stmarks, len); 
    return 0;
}

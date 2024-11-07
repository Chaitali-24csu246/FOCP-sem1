// ASSIGNMENT 2 Q3 TO FIND FIRST 99 MARKS
#include <stdio.h>
void f9(float marks[], int len){
    int i,k=0;
    for(i=0;i<len;i++){
        if(marks[i]==99){
        k=1;
        break;
        }
    }
    if(k==1)
        printf("First 99 at index %d",i);
        else
        printf("No 99s in array");
}
int main(){
    int len;
    printf("Enter number of students");
    scanf("%d",&len);
    float stmarks[len],m; 
    int a=0;
    for(a=0;a<len;a++){
        printf("Enter marks of student %d: ",a+1);
        scanf("%f",&m);
        stmarks[a]=m;
    }
    f9(stmarks,len);
    return 0;
}

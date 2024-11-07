// ASSIGNMENT 1 Q4 SWAP WITH 4 DIFFERENT METHODS
#include <stdio.h>
void method1(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    printf("After swapping: a=%d, b=%d\n",a,b);
}
void method2(int a, int b){
    a=b+a;
    b=a-b;
    a=a-b;
    printf("After swapping: a=%d, b=%d\n",a,b);
}
void method3(int a, int b){
    a=b*a;
    b=a/b;
    a=a/b;
    printf("After swapping: a=%d, b=%d\n",a,b);
}
void method4(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
    printf("After swapping: a=%d, b=%d\n",*a,*b);
}
int main(){
    int a,b;
    printf("Enter two numbers a and b: ");
    scanf("%d %d",&a,&b);
    method1(a,b);
    method2(a,b);
    method3(a,b);
    method4(&a,&b);
}

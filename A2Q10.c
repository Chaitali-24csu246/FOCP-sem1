//ASSIGNMENT 2 Q10 COUNT PRIME NUMBERS IN AN ARRAY
#include <stdio.h>
int takearray(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void prime(int elem){
    int a=0,i;
    for(i=2;i<elem;i++){
        if(elem%i==0)
        a++;
    }
    if(a!=0){
        printf("%d is not a prime number\n",elem);
    } else {
        printf("%d is a prime number",elem);
    }
}
int main(){
    int n;
    printf("Enter number of elements you want to enter ");
    scanf("%d",&n);
    int arr[n];
    takearray(arr,n);
    int i;
    for(i=0;i<n;i++){
        prime(arr[i]);
    }
    return 0;
}

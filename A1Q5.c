// ASSIGNMENT 1 Q5 PERFECT NUMBER DETERMINATION
#include <stdio.h>
int len(int a){
    int len=0,i;
    for(i=1;i<=a;i++){
        if(a%i==0){
            len++;
        }
    }
    return len;
}

void list(int len, int l[], int a){
    int i, q=0;
    for(i=1; i<=a; i++){ 
        if(a%i==0){
            l[q]=i;
            q++;
        }
    }
}

void perfect(int len, int l[], int a){
    int s=0, i;
    for(i=0; i<len-1; i++){ 
        s+=l[i];
    }
    if(s==a){
        printf("Perfect number");
    } else {
        printf("Not a perfect number");
    }
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int length = len(a);
    int l[length]; 
    list(length, l, a);
    perfect(length, l, a);
    return 0;
}

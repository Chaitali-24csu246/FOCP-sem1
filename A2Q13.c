//ASSIGNMENT 2 Q13 CYCLIC ROTATION
#include <stdio.h>
void rotate(int l[], int len){
    int num=l[len-1],i;
    for (i=len-1;i>0;i--){
        l[i]=l[i-1];
    }
    l[0]=num;
    printf("\nRotated List: ");
    for (i=0;i<len;i++) {
        printf("%d ", l[i]);
    }
}
int main() {
    int l[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int len = sizeof(l) / sizeof(l[0]);
    int i, num;
    printf("Original List: ");
    for (i=0; i<len; i++) {
        printf("%d ",l[i]);
    }
    rotate(l,len);
    return 0;
}

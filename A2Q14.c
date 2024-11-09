//ASSIGNMENT 2 Q14 FIND DUPLICATES IN ARRAYS
#include <stdio.h>
void duplicate(int dupe[], int n) {
    int i, j;
    int found=0; 
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(dupe[i]==dupe[j]){
                int ap=0;
                for (int k=0; k< i;k++) {
                    if (dupe[i]==dupe[k]) {
                        ap=1; 
                        break;
                    }}
                if(ap==0){
                    printf("%d ",dupe[i]);
                    found=1;
                    break; 
                }}}}
    if (found==0) {
        printf("-1");
    }}
int main() {
    int dupe[100];
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); 
    printf("Enter the elements of the array: ");
    for (i=0;i<n;i++) {
        scanf("%d", &dupe[i]); 
    }
    printf("Duplicates: ");
    duplicate(dupe, n); 
    return 0;
}

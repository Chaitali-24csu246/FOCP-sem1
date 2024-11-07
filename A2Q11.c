#include <stdio.h>
//ARRAY INSERTION
int main() {
    int s, i,p,v;
    printf("Enter size: ");
    scanf("%d", &s);
    int a[s];
    printf("Enter elements:\n");
    for(i= 0; i<s;i++) {
        scanf("%d", &a[i]);
    }
    printf("Original array: ");
    for (i = 0; i < s; i++) {
        printf("%d ", a[i]);
    }
    printf("\nposition: ");
    scanf("%d", &p);
    if(p>s+1 || p<1) {
        printf("Invalid position\n");
    }else{
        printf("Enter value: ");
        scanf("%d", &v);
        if(p==1) {
            for(i=s;i>=1;i--){
                a[i]=a[i-1];}
            a[0]=v;
            s++;
        }else if(p==s+1){
            a[s-1]=v;
            s++;
        }else{
            for (i=s;i>=p; i--) {
                a[i]=a[i-1];}
            a[p-1]= v;
            s++;
        }
        printf("Array after insertion: ");
        for (i=0; i<s; i++) {
            printf("%d ", a[i]);
        }}
    return 0;
}

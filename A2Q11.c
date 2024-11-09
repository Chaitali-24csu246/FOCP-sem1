// INSERT AT ANY POSITION
#include <stdio.h>
int main() {
    int l[11]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(l)/sizeof(l[0]);
    int i,ind,num;
    printf("List is: ");
    for(i=0;i<len-1;i++){
        printf("%d ",l[i]);
    }
    printf("\nEnter position (1 to %d) at which you want to insert: ",len);
    scanf("%d",&ind);
    if(ind<=len && ind>0){
    for(i=len-1;i>=ind-1;i--){
            l[i]=l[i-1];
        }
        printf("Enter number to be inserted at that position");
        scanf("%d",&num);
        l[ind-1]=num;
        for(i=0;i<len;i++){
        printf("%d ",l[i]);
    }
    } else {
        printf("Position not in range");
    }
    return 0;
}

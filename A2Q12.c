// DELETE AT ANY POSITION
#include <stdio.h>
int main() {
    int l[10]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(l)/sizeof(l[0]);
    int i,ind,num;
    printf("List is: ");
    for(i=0;i<len;i++){
        printf("%d ",l[i]);
    }
    printf("\nEnter position (1 to %d) at which you want to delete: ",len);
    scanf("%d",&ind);
    if(ind<=len && ind>0){
    for(i=ind;i<=len;i++){
            l[i-1]=l[i];
        }
        for(i=0;i<len-1;i++){
        printf("%d ",l[i]);
    }
    } else {
        printf("Position not in range");
    }
    return 0;
}

#include <stdio.h>
//PASCAL'S TRIANGLE
int main() {
    int r,c,n,p=1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(r=0;r <n;r++)
        {for (c=0; c<=r; c++){
            if(c==0 || r==0)
                p=1;
            else
                p=p*(r-c+1)/c;
            printf("%d",p);
        }
        printf("\n");
    }
    return 0;
}

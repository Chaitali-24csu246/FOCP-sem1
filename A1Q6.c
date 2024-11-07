// ASSIGNMENT Q6 QUADRANT DETERMINATION
#include <stdio.h>
int main(){
    float x,y;
    printf("Enter x coordinate");
    scanf("%f",&x);
    printf("Enter y coordinate");
    scanf("%f",&y);
    if(x==0 || y==0)
    {
        if(x==0 && y==0)
        printf("POINTS (%f,%f) LIE AT THE ORIGIN", x, y);
        else if(y== 0) 
        printf("POINTS (%f,%f) LIE ON X AXIS", x, y);
        else if(x == 0) 
        printf("POINTS (%f,%f) LIE ON Y AXIS", x, y);
    }
    else if(x > 0) {
        if(y > 0)
            printf("POINTS (%f,%f) LIE IN FIRST QUADRANT", x, y);
        else
            printf("POINTS (%f,%f) LIE IN FOURTH QUADRANT", x, y);
    } else {
        if(y > 0)
            printf("POINTS (%f,%f) LIE IN SECOND QUADRANT", x, y);
        else
            printf("POINTS (%f,%f) LIE IN THIRD QUADRANT", x, y);
    }
    return 0;
}

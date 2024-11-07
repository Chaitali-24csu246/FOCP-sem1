//CALCULATOR
#include <stdio.h>
#include <math.h>
float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mul(float a, float b){
    return a*b;
}
float divide(float a, float b){
    if(b==0){
        printf("Division by zero is invalid");
        return 0;
    } else {
        return a/b;
    }
}
void sqroot(float a, float b){
    if(a>=0 && b>=0){
    printf("%f %f", sqrt(a), sqrt(b));
    } else {
        printf("value cannot be negative");
    }
}
float logarithm(float a, float b){
    if(a>=0 && b>1){
    return log(a)/log(b);}
    else{
        printf("Can't take log with negative values or base smaller than");
        return 1;
    }
}

float power(float a, float b){
    return pow(a,b);
}
int main(){
    int choice;
    float a,b;
    printf("|===================================|\n|        SIMPLE CALCULATOR          |\n|===================================|\n| 1 -> ADDITION [a+b]               |\n| 2 -> SUBTRACTION [a-b]            |\n| 3 -> MULTIPLICATION [a*b]         |\n| 4 -> DIVISION [a/b]               |\n| 5 -> LOGARITHM [log base a(b)]    |\n| 6 -> SQUARE ROOTS [a^0.5,b^0.5]   |\n| 7 -> POWER [a^b]                  |\n| |===================================|");
    printf("\nGive value of a: ");
    scanf("%f",&a);
    printf("Give value of b: ");
    scanf("%f",&b);
    printf("\n GIVE NUMBER FOR OPERATION YOU WISH TO PERFORM :__");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("%f",add(a,b));break;
        case 2: printf("%f",sub(a,b));break;
        case 3: printf("%f",mul(a,b));break;
        case 4: printf("%f",divide(a,b));break;
        case 5: printf("%f",logarithm(a,b));break;
        case 6: sqroot(a,b);break;
        case 7: printf("%f",power(a,b));break;
        default: printf("INVALID INPUT");
    }
    return 0;
}

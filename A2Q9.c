//ASSIGNMENT 2 Q9 PEAK ELEMENT
#include <stdio.h>
void peak(int arr[], int len) {
    if (len == 1) {
        printf("Peak element is: %d at index 0\n", arr[0]);
        return;
    }
    if (arr[0] >= arr[1]) {
        printf("Peak element is: %d at index 0\n", arr[0]);
        return;
    }
    if (arr[len - 1] >= arr[len - 2]) {
        printf("Peak element is: %d at index %d\n", arr[len - 1], len - 1);
        return;
    }
    for (int i = 1; i < len - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("Peak element is: %d at index %d\n", arr[i], i);
            return;
        }
    }
    printf("No peak element found.\n");
}
int main() {
    int len;
    printf("Enter number of elements in the array: ");
    scanf("%d", &len);
    if (len <=0) {
        printf("Array length must be greater than zero.\n");
    }else{
    int arr[len];
    printf("Enter the elements of the array:\n");
    for (int i=0; i<len;i++) {
        scanf("%d", &arr[i]);
    }
    peak(arr,len);}
    return 0;
}

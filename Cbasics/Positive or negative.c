#include <stdio.h>

int main(){

    int a;
    printf("Enter a number: " );
    scanf("%d", &a);
    if (a > 0) {
        printf("The number is positive.");
    } else {
        printf("The number is negative or zero.");
    }
    return 0;
}





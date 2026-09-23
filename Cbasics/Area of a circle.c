#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14159;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area: %f\n", area);

    return 0;
}

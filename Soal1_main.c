#include <stdio.h>
#include <stdlib.h>

void sortSides(float *a, float *b, float *c) {
    float tmp;
    if (*a > *b) { tmp = *a; *a = *b; *b = tmp; }
    if (*b > *c) { tmp = *b; *b = *c; *c = tmp; }
    if (*a > *b) { tmp = *a; *a = *b; *b = tmp; }
}
float absoluteValue(float x) {
    if (x < 0) return -x;
    return x;
}
int main() {
    float a, b, c;
    printf("=== DETERMINE TRIANGLE ===\n");
    printf("Enter side a: "); scanf("%f", &a);
    printf("Enter side b: "); scanf("%f", &b);
    printf("Enter side c: "); scanf("%f", &c);
    printf("\n");

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("NO TRIANGLE: one or more sides are negative or zero.\n");
        return 0;
    }
    sortSides(&a, &b, &c);
    if (c >= (a + b)) {
        printf("NO TRIANGLE: does not satisfy triangle inequality.\n");
        return 0;
    }
    if (a == b && b == c) {
        printf("EQUILATERAL TRIANGLE\n");
    } else if (a == b || b == c || a == c) {
        printf("ISOSCELES TRIANGLE\n");
    } else if (absoluteValue((c * c) - (a * a + b * b)) < 0.0001) {
        printf("RIGHT TRIANGLE\n");
    } else {
        printf("SCALENE TRIANGLE\n");
    }
    return 0;
}

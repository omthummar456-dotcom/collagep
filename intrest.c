#include <stdio.h>

int main() {
    float P, R, N, Interest;

    printf("Enter Principal: ");
    scanf("%f", &P);

    printf("\nEnter Rate of Interest : ");
    scanf("%f", &R);

    printf("\nEnter Time : ");
    scanf("%f", &N);

    Interest = (P * R * N) / 100;

printf("\n\nintrest is : %f",Interest);

    return 0;
}

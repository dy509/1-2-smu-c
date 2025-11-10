#include <stdio.h>

double sum(int a[], int len) { // 배열의 합
    double s = 0;
    for (int i = 0; i < len; i++) {
        s += a[i];
    }
    return s;
}

double mean(int a[], int len) { // 배열의 평균
    return sum(a, len) / len;
}

double variance(int a[], int len) { // 배열의 분산
    double m = mean(a, len);
    double sumOfDevSquare = 0;

    for (int i = 0; i < len; i++) {
        double dev = a[i] - m;            // 편차
        sumOfDevSquare += dev * dev;      // 편차 제곱의 합
    }

    return sumOfDevSquare / len; // 분산 = 편차 제곱의 평균
}

int main(void) {
    int a[] = { 10, 20, 30, 40, 50, 60 };
    int len = sizeof(a) / sizeof(a[0]); // 배열의 길이

    printf("sum: %.6f\n", sum(a, len));
    printf("mean: %.6f\n", mean(a, len));
    printf("variance: %.6f\n", variance(a, len));

    return 0;
}

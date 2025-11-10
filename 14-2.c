#include <stdio.h>

int main(void) {
    char str[100]; // 입력받은 문자열을 저장할 배열
    int total = 0; // 전체 문자 수 합계

    for (int i = 0; i < 3; i++) { // 문자열 입력 3번 반복
        printf("문자열을 입력하세요: ");
        scanf_s("%s", str, sizeof(str)); // 문자열 입력
        int len = 0; // 문자열 길이 계산
        while (str[len] != '\0') {
            len++;
        }

        printf("%s %d\n", str, len); // 각 문자열과 길이 출력
        total += len; // 총 문자 수 누적
    }

    printf("모든 문자 수는 %d\n", total); // 전체 문자 수 출력
    return 0;
}

#include <stdio.h>
// 8번

void show_digit(int x);

int main() {
    int x;

    printf("정수를 입력하십시오: ");
    scanf("%d", &x);

    show_digit(x);// 각 자릿수를 출력
    printf("\n");

    return 0;
}

// show_digit 함수 (재귀 함수)
void show_digit(int x) {

    // 조건: x가 한 자리 숫자일 때
    if (x < 10) {
        printf("%d ", x); 
    } else {
        show_digit(x / 10); // 재귀 호출: x를 10으로 나눈 몫에 대해 함수 호출
        printf("%d ", x % 10); // 나머지 출력: 현재 자리 숫자
    }
}

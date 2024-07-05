#include <stdio.h>

// 함수 선언
int sum(int n);

// 메인 함수
int main() {
    int n;

    printf("정수를 입력하십시오: ");
    scanf("%d", &n);

    printf("1부터 %d까지의 합 = %d\n", n, sum(n));

    return 0;
}

// sum 함수 구현 (재귀 함수)
int sum(int n) {
    if (n == 1) {
        return 1; // 기저 조건: n이 1이면 1을 반환
    } else {
        return n + sum(n - 1); // 재귀 호출: n + sum(n-1)
    }
}

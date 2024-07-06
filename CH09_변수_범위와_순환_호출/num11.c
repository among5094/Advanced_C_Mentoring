#include <stdio.h>
// 11번

int fib(int n);

int main() {
    int n;
    printf("정수를 입력하십시오: ");
    scanf("%d", &n);

    // 피보나치 수열 값을 계산하여 출력
    printf("fib(%d) = %d\n", n, fib(n));

    return 0;
}

// fib 함수 (재귀 함수)
int fib(int n) {
    if (n == 0) {// 조건: n이 0이면 0을 반환
        return 0; 
    } else if (n == 1) {// 조건: n이 1이면 1을 반환
        return 1; 
    } else { // 조건: n이 0도 아니고 1도 아닐 때 
        return fib(n - 2) + fib(n - 1); // 재귀 호출
    }
}

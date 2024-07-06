#include <stdio.h>
// 10번

double harmonic_sum(int n);

int main() {
    int n;
    double result;

    printf("정수를 입력하십시오: ");
    scanf("%d", &n);

    // 수열의 값을 계산하여 출력
    result = harmonic_sum(n);
    printf("%lf\n",result);

    return 0;
}

// harmonic_sum 함수 (재귀 함수)
double harmonic_sum(int n) {
    if (n == 1) {
        return 1.0; // 조건: n이 1이면 1.0을 반환
    } else {
        return 1.0 / n + harmonic_sum(n - 1); // 재귀 호출
    }
}

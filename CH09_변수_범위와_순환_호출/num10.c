#include <stdio.h>
// 10번(조화수열의 합 문제)

double harmonic_sum(int n);

int main() {
    int n;
    double result;

    // 사용자로부터 정수를 입력받음
    printf("정수를 입력하십시오: ");
    scanf("%d", &n);

    // 입력받은 정수를 사용하여 수열의 값을 계산
    result = harmonic_sum(n);

    // 계산된 결과를 출력
    printf("%lf\n",result);

    return 0;
}

// harmonic_sum 함수 (재귀 함수)
double harmonic_sum(int n) {

    // 기저 조건: n이 1일 때, 결과는 1.0(n이 1일 때, 조화수열의 합을 직접 계산할 수 있으므로)
    if (n == 1) {
        return 1.0; // 조건: n이 1이면 1.0을 반환
    } else {
        return 1.0 / n + harmonic_sum(n - 1); // 재귀 호출
    }
}

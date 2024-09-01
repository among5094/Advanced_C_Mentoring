#include <stdio.h>
// 14번

// 두 정수의 합과 차를 계산하여 반환하는 함수
void get_sum_diff(int x, int y, int *p_sum, int *p_diff) {
    *p_sum = x + y;   // 포인터 p_sum이 가리키는 곳에 합을 저장
    *p_diff = x - y;  // 포인터 p_diff가 가리키는 곳에 차를 저장
}

int main() {
    int a = 100;  // 첫 번째 정수
    int b = 200;  // 두 번째 정수
    int sum, diff;

    // 합과 차를 계산하는 함수 호출
    get_sum_diff(a, b, &sum, &diff);

    // 결과 출력
    printf("원소들의 합 = %d\n", sum);
    printf("원소들의 차 = %d\n", diff);

    return 0;
}

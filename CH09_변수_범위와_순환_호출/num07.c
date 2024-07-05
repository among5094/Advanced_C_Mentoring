#include <stdio.h>
// 7번

int power(int base, int power_raised);

// 메인 함수
int main() {
    int base, power_raised;

    printf("밑수: ");
    scanf("%d", &base);
    printf("지수: ");
    scanf("%d", &power_raised);

    // 지수값 계산하여 출력
    printf("%d^%d = %d\n", base, power_raised, power(base, power_raised));

    return 0;
}

// power 함수 구현 (재귀 함수)
int power(int base, int power_raised) {
    if (power_raised == 0) {
        return 1; // 기저 조건: 지수가 0이면 1을 반환
    } else {
        return base * power(base, power_raised - 1); // 재귀 호출
    }
}

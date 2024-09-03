#include <stdio.h>
// 7번

int power(int base, int power_raised);

// 메인 함수
int main() {
    int base; // 밑수
    int power_raised; // 지수

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
    if (power_raised == 0) { // 조건: 재귀 호출을 종료하는 조건(지수가 0일 때 결과는 1)
        return 1; // 지수가 0이면 1을 반환
    } else {
        return base * power(base, power_raised - 1);
        // 재귀 호출(power_raised - 1은 지수를 1씩 줄여서 재귀 호출을 진행)
    }
}

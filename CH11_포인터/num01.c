#include <stdio.h>
// 1번
int main() {
    double f; // 사용자로부터 입력받을 실수
    int integer_part; // 실수의 정수부를 저장할 변수
    double decimal_part; // 실수의 소수부를 저장할 변수

    printf("실수를 입력하세요: ");
    scanf("%lf", &f);

    // 정수부 계산
    integer_part = (int)f; 

    // 소수부 계산
    decimal_part = f - integer_part;

    // 결과 출력
    printf("%.2f가 입력되었습니다.\n", f);
    printf("정수부는 %d입니다.\n", integer_part);
    printf("소수부는 %.2f입니다.\n", decimal_part);

    return 0;
}

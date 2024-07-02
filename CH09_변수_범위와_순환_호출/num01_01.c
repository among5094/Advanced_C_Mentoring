#include <stdio.h>
// 9강 연습문제 1번 - 1. 정적 지역 변수를 사용한 부분

// 덧셈 함수
int add(int a, int b) {
    static int add_count = 0; // 정적 지역 변수
    add_count++;
    printf("덧셈은 총 %d번 실행되었습니다.\n", add_count);
    return a + b;
}

// 뺄셈 함수
int sub(int a, int b) {
    static int sub_count = 0; // 정적 지역 변수
    sub_count++;
    printf("뺄셈은 총 %d번 실행되었습니다.\n", sub_count);
    return a - b;
}

// 곱셈 함수
int mul(int a, int b) {
    static int mul_count = 0; // 정적 지역 변수
    mul_count++;
    printf("곱셈은 총 %d번 실행되었습니다.\n", mul_count);
    return a * b;
}

// 나눗셈 함수
int divide(int a, int b) {
    static int div_count = 0; // 정적 지역 변수
    div_count++;
    if (b != 0) {
        printf("나눗셈은 총 %d번 실행되었습니다.\n", div_count);
        return a / b;
    } else {
        printf("오류: 0으로 나눌 수 없습니다.\n");
        return 0;
    }
}

// 메인 함수
int main() {
    int a, b;
    char operator;
    int result;
    char exit_choice;

    while (1) {
        printf("연산을 입력하십시오 : ");
        if (scanf("%d%c%d", &a, &operator, &b) != 3) {
            break; // 입력이 잘못된 경우 루프 종료
        }

        switch (operator) {
            case '+':
                result = add(a, b);
                break;
            case '-':
                result = sub(a, b);
                break;
            case '*':
                result = mul(a, b);
                break;
            case '/':
                result = divide(a, b);
                break;
            default:
                printf("잘못된 연산자입니다.\n");
                continue;
        }

        printf("연산의 결과: %d\n", result);printf("종료하시겠습니까? (y/n): ");
        scanf(" %c", &exit_choice);
        if (exit_choice == 'y' || exit_choice == 'Y') {
            break; // 루프 종료

        }
    }

    return 0;
}

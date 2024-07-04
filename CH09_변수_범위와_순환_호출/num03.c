#include <stdio.h>

#define CORRECT_PASSWORD "1234"

// 함수 선언
int check(char input_password[4]);

// 메인 함수
int main() {
    char input_password[4];
    int attempts = 0;
    int success = 0;

    // 3번까지 비밀번호 입력 시도
    while (attempts < 3 && !success) {
        printf("비밀번호를 입력하십시오 (4자리 숫자): ");
        for (int i = 0; i < 4; i++) {
            input_password[i] = getchar();
        }
        getchar(); // Enter 키 입력을 버퍼에서 제거

        success = check(input_password);
        attempts++;
    }

    // 비밀번호가 3번 틀렸을 경우
    if (!success) {
        printf("로그인 시도 횟수 초과\n");
    }

    return 0;
}

// 비밀번호 검사 함수 구현
int check(char input_password[4]) {
    static int attempt_count = 0; // 정적 지역 변수
    int correct = 1;

    attempt_count++;

    // 비밀번호 비교
    for (int i = 0; i < 4; i++) {
        if (input_password[i] != CORRECT_PASSWORD[i]) {
            correct = 0;
            break;
        }
    }

    if (correct) {
        printf("비밀번호가 일치합니다.\n");
        printf("비밀번호 시도 횟수: %d\n", attempt_count);
        return 1;
    } else {
        printf("비밀번호가 일치하지 않습니다.\n");
        printf("비밀번호 시도 횟수: %d\n", attempt_count);
        return 0;
    }
}

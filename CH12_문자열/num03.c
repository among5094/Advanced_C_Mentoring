#include <stdio.h>
#include <string.h>
// 3번

// 문자열에서 사용자가 지정한 문자를 제거하는 함수
void remove_char(char *input, char remove, char *output) {
    int j = 0; // output 배열의 인덱스를 가리킬 변수 j를 0으로 초기화

    // 입력 문자열(input)의 길이만큼 반복
    for (int i = 0; i < strlen(input); i++) {
        // 현재 문자가 제거할 문자와 다른 경우
        if (input[i] != remove) {
            output[j++] = input[i]; // 제거할 문자가 아닌 문자를 output 배열에 저장하고 j를 증가시킴
        }
    }

    output[j] = '\0'; // 최종적으로 출력 문자열의 끝에 null 문자('\0')를 추가하여 문자열 종료를 명시
}

int main() {
    char str[100];    // 사용자가 입력한 문자열을 저장할 배열, 최대 100글자까지 저장 가능
    char result[100]; // 지정한 문자가 제거된 문자열을 저장할 배열, 최대 100글자까지 저장 가능
    char remove;      // 사용자가 지정한 제거할 문자를 저장할 변수

    // 사용자로부터 문자열 입력받음
    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin); // 표준 입력(stdin)으로부터 문자열을 입력받아 str 배열에 저장
                                    // sizeof(str)는 배열 str의 크기를 의미하며, 입력 길이를 제한하기 위해 사용됨
                                    // fgets는 공백 포함 입력을 받을 수 있음
    str[strcspn(str, "\n")] = '\0'; // fgets로 입력된 문자열 끝에 있는 개행 문자를 제거

    // 사용자로부터 제거할 문자 입력받음
    printf("제거할 문자: ");
    scanf("%c", &remove); // 제거할 문자를 입력받아 remove 변수에 저장

    // 지정한 문자를 제거하는 함수 호출
    remove_char(str, remove, result);

    // 결과 문자열 출력
    printf("결과 문자열 = %s\n", result);

    return 0; // 프로그램이 정상적으로 종료되었음을 알림
}

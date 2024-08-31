#include <stdio.h>
#include <string.h>
// 2번

// 입력받은 문자열에서 공백 문자를 제거하는 함수
void remove_spaces(char *input, char *output) {
    int j = 0; // output 배열의 인덱스를 가리킬 변수 j를 0으로 초기화

    // 입력 문자열(input)의 길이만큼 반복
    for (int i = 0; i < strlen(input); i++) {
        // 현재 문자가 공백(' ')이 아닌 경우
        if (input[i] != ' ') {
            output[j++] = input[i]; // 공백이 아닌 문자를 output 배열에 저장하고 j를 증가시킴
        }
    }

    output[j] = '\0'; // 최종적으로 출력 문자열의 끝에 null 문자('\0')를 추가하여 문자열 종료를 명시
}

int main() {
    char str[100];    // 사용자가 입력한 문자열을 저장할 배열, 최대 100글자까지 저장 가능
    char result[100]; // 공백이 제거된 문자열을 저장할 배열, 최대 100글자까지 저장 가능

    // 사용자로부터 문자열을 입력받음
    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin); // 표준 입력(stdin)으로부터 문자열을 입력받아 str 배열에 저장
                                    // sizeof(str)는 배열 str의 크기를 의미하며, 입력 길이를 제한하기 위해 사용됨
                                    // fgets는 공백 포함 입력을 받을 수 있음

    // 공백 제거 함수 호출: 입력받은 문자열에서 공백을 제거한 후 result 배열에 저장
    remove_spaces(str, result);

    printf("공백 제거 문자열 = %s\n", result);

    return 0; 
}

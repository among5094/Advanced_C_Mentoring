#include <stdio.h>
#include <string.h>
// 1번(작년시험)

int main() {
    char str[100]; // 문자열을 저장할 배열
    int length;    // 문자열의 길이를 저장할 변수

    // 사용자로부터 문자열 입력받기
    printf("문자열을 입력하시오: ");
    scanf("%s", str);

    // 문자열의 길이를 계산
    length = strlen(str);

    // 문자열을 역순으로 출력
    printf("역순 문자열: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

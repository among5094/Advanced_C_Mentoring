#include <stdio.h>
// 4번

// 문자열 s에서 문자 c의 개수를 세는 함수
int str_chr(char *s, int c) {
    int count = 0; // 카운터 변수 초기화
    
    // 문자열의 끝을 만날 때까지 반복
    while (*s != '\0') {
        if (*s == c) {
            count++; // 문자가 발견되면 카운터 증가
        }
        s++; // 다음 문자로 이동
    }
    
    return count; // 최종 카운트 반환
}

int main() {
    char str[100]; // 문자열을 저장할 배열
    char ch;       // 찾을 문자를 저장할 변수
    
    // 문자열 입력받기
    printf("문자열을 입력하시오: ");
    fgets(str, sizeof(str), stdin);
    
    // 찾을 문자 입력받기
    printf("문자를 입력하시오: ");
    scanf("%c", &ch);
    
    // str_chr 함수를 사용하여 문자 개수 세기
    int count = str_chr(str, ch);
    
    // 결과 출력
    printf("\n%c의 개수: %d\n", ch, count);
    
    return 0;
}

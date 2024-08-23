#include <stdio.h>
// 4번

int my_strlen(char *p) {
    int length = 0;
    
    // 문자열 끝에 도달할 때까지 반복
    while (p[length] != '\0') {  // 이미 존재하는 null문자 확인하기
        length++;  // 문자의 개수를 셈
    }
    
    return length;
}

int main() {
    char str[] = "HELLO WORLD";
    
    // my_strlen 함수 테스트
    int length = my_strlen(str);
    
    printf("저장된 문자열 = %s\n", str);
    printf("문자열의 길이 = %d\n", length);
    
    return 0;
}

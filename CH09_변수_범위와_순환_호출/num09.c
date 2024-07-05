#include <stdio.h>
//9장 9번

void reverse(void);

int main() {
    printf("문장을 입력하십시오: ");
    reverse();
    printf("\n");

    return 0;
}

// reverse 함수 구현 (재귀 함수)
void reverse(void) {
    char c;
    if ((c = getchar()) != '\n') { // 문자를 입력받고 '\n'이 아니면 재귀 호출
        reverse();
        putchar(c); // 역순으로 출력
    }
}

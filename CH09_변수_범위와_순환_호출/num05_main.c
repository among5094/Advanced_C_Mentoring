// main.c
#include <stdio.h>

// extern 키워드를 사용하여 외부 변수 참조
extern double pi;

int main() {
    // pi 값 출력
    printf("pi = %.2f\n", pi);
    return 0;
}

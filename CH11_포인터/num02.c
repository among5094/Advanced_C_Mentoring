#include <stdio.h>
// 2번

int main() {
    int arr[3];  // 크기가 3인 int형 배열 생성

    // 사용자로부터 정수를 입력받아 배열에 저장
    for (int i = 0; i < 3; i++) {
        printf("정수를 입력하시오: ");
        scanf("%d", &arr[i]);
    }

    // 배열 요소의 주소와 값을 출력
    printf("=================\n");
    printf("주소        값\n");
    printf("=================\n");

    for (int i = 0; i < 3; i++) {
        printf("%08X\t%02d\n", (unsigned int)&arr[i], arr[i]);
    }

    return 0;
}

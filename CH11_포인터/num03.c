#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 3번

void array_fill(int *arr, int size) {
    // 배열 요소를 난수로 채우기
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 300000; // 0부터 99999까지의 난수 생성
    }
}

int main() {
    int arr[10]; // 크기가 10인 정수 배열 생성

    // 난수 생성을 위한 시드 설정
    srand(time(NULL));

    // array_fill 함수 호출
    array_fill(arr, 10);

    // 배열 출력
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

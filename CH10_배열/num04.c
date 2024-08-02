#include <stdio.h>
// 4번

// 배열을 복사하는 함수
void array_copy(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        b[i] = a[i]; // 배열 a의 요소를 배열 b로 복사
    }
}

int main() {
    int array1[10] = {1, 2, 3, 4, 0, 0, 0, 0, 0, 0};
    int array2[10] = {0}; // 초기값을 0으로 설정
    int size = sizeof(array1) / sizeof(array1[0]); // 배열 크기 계산

    array_copy(array1, array2, size); // 배열 복사 함수 호출

    // 배열 복사 결과 출력
    printf("array1: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("array2: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
// 10번

// 배열 A[]를 B[]에 복사하는 함수
void array_copy(int *A, int *B, int size) {
    int i;
    for (i = 0; i < size; i++) {
        B[i] = A[i];  // A의 각 요소를 B로 복사
    }
}

int main() {
    int A[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};  // A 배열 초기화
    int B[10];  // B 배열 선언
    int size = 10;

    // 배열 A를 B로 복사
    array_copy(A, B, size);

    // A 배열 출력
    printf("A[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // B 배열 출력
    printf("B[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

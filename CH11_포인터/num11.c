#include <stdio.h>
// 11번

// 두 배열 A와 B를 더한 결과를 배열 C에 저장하는 함수
void array_add(const int *A, const int *B, int *C, int size) {
    for (int i = 0; i < size; i++) {
        // A[i]와 B[i]를 더해 C[i]에 저장
        C[i] = A[i] + B[i];
    }
}

int main() {
    
    int size = 10; // 배열의 크기 지정

    int A[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int B[10] = {4, 5, 6, 0, 0, 0, 0, 0, 0, 0};
    int C[10];  // 결과를 저장할 배열 C

    // A와 B 배열을 더하여 C 배열에 저장
    array_add(A, B, C, size);

    // 배열 A 출력
    printf("A[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);  // A 배열의 각 요소를 출력
    }
    printf("\n");

    // 배열 B 출력
    printf("B[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", B[i]);  // B 배열의 각 요소를 출력
    }
    printf("\n");

    // 배열 C 출력
    printf("C[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", C[i]);  // C 배열의 각 요소를 출력
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
// 12번

// 배열 요소들의 합을 계산하여 반환하는 함수
int array_sum(const int *A, int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += A[i]; // 배열 A의 각 요소를 합산
    }
    return sum; // 총합 반환
}

int main() {
    // 배열의 크기 설정
    int size = 10;

    int A[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0}; // 직원들의 월급 저장

    // 배열 A 출력
    printf("A[] = ");
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);  // A 배열의 각 요소를 출력
    }
    printf("\n");

    // 배열 A의 요소들의 합 계산
    int total_salary = array_sum(A, size);

    // 월급의 총합 출력
    printf("월급의 합 = %d\n", total_salary);

    return 0;
}

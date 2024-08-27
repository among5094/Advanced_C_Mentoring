#include <stdio.h>
// 8번

// 배열 A에서 최대값을 찾아 그 값의 "주소"를 반환
double* get_max(double* A, int size) {
    
    double* max_ptr = A;  // 첫 번째 요소의 주소를 최대값의 주소로 초기화
    for (int i = 1; i < size; i++) {  // 첫 번째 요소는 이미 max_ptr로 초기화했으므로 i = 1부터 시작
        if (A[i] > *max_ptr) {  // 현재 요소가 현재 최대값보다 크면
            max_ptr = &A[i];  // 해당 요소의 주소를 max_ptr로 업데이트
        }
    }
    return max_ptr;  // 최대값의 주소 반환
}

int main() {
    double A[] = {1.23, 3.14, 9.16, 100.90};  // 예제 배열
    int size = sizeof(A) / sizeof(A[0]);  // 배열 크기 계산

    double* max_value_ptr = get_max(A, size);  // 최대값의 주소를 찾음
    printf("최대값은 %.2f입니다.\n", *max_value_ptr);  // 최대값 출력

    return 0;
}

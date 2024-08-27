#include <stdio.h>
// 7번 
// 핵심: 포인터를 이용해 배열의 끝을 가리킨 다음, 포인터를 하나씩 감소시키면서 배열 요소를 역순으로 출력하기

int main() {
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};  // 배열 초기화
    int size = sizeof(A) / sizeof(A[0]);       // 배열 크기 계산
    int *ptr = A + size - 1;                   // 배열의 마지막 요소를 가리키는 포인터 설정
    // 배열의 시작 주소인 A에 size - 1을 더해 마지막 요소를 가리키게 설정

    // 원래 배열 출력
    printf("A[] = ");
    for (int *p = A; p <= A + size - 1; p++) { //
        printf("%d ", *p);
    }
    printf("\n");

    // 역순으로 배열 출력
    printf("A[] = ");
    while (ptr >= A) {  // 포인터가 배열의 시작을 가리킬 때까지 반복
        printf("%d ", *ptr);
        ptr--;  // 포인터를 왼쪽으로 이동
    }
    printf("\n");

    return 0;
}

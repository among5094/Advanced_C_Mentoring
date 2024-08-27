#include <stdio.h>
// 6번

void array_print(int *A, int size) {
    printf("A[] = { ");

    for (int i = 0; i < size; i++) {
        printf("%d", A[i]); //배열의 현재 요소 값을 출력

        if (i < size - 1) // 배열의 마지막 요소 뒤에는 쉼표와 공백이 필요 없기 때문에
            printf(", "); // 조건문으로 i가 마지막 인덱스(size - 1)보다 작은 경우에만 쉼표와 공백을 출력


    }

    printf(" }\n");
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0};
    int size = sizeof(A) / sizeof(A[0]);
    // 배열의 크기를 계산(배열의 전체 크기를 sizeof(A)로 계산하고
    // 배열의 각 요소의 크기를 sizeof(A[0])로 계산하여 나누면 배열의 요소 개수를 얻을 수 있음)

    array_print(A, size);

    return 0;
}

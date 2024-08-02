#include <stdio.h>
// 3번

// 두 개의 배열 욧가 같은지 검사하는 함수
int array_equal(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] != b[i]) {
            return 0; // 배열 요소가 다르면 0 반환
        }
    }
    return 1; // 모든 요소가 같으면 1 반환
}

int main() {
    int array1[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int array2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int size = 10;

    if (array_equal(array1, array2, size)) {
        printf("2개의 배열은 같습니다.\n");
    } else {
        printf("2개의 배열은 다릅니다.\n");
    }

    return 0;
}

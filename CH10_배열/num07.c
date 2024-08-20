#include <stdio.h>

int main() {
    // 2차원 배열 초기화
    int arr[3][5] = {
        {12, 56, 32, 16, 98},
        {99, 56, 34, 41, 3},
        {65, 3, 87, 78, 21}
    };

    // 각 행의 합계 계산 및 출력
    for (int i = 0; i < 3; i++) {
        int row_sum = 0;
        for (int j = 0; j < 5; j++) {
            row_sum += arr[i][j];
        }
        printf("%d행의 합계: %d\n", i, row_sum);
    }

    // 각 열의 합계 계산 및 출력
    for (int j = 0; j < 5; j++) {
        int col_sum = 0;
        for (int i = 0; i < 3; i++) {
            col_sum += arr[i][j];
        }
        printf("%d열의 합계: %d\n", j, col_sum);
    }

    return 0;
}

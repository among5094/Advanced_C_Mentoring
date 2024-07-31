#include <stdio.h>
// 1번

// 월의 일 수를 출력하는 함수
void printDays(int days[], int size);

int main() {
    int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int size = sizeof(days) / sizeof(days[0]);

    printDays(days, size); // 배열과 배열의 크기를 같이 전송

    return 0;
}

void printDays(int days[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 2번

int main() {
    int array[10];
    int i, max, min;

    // 난수 초기화를 위해 시드 설정
    srand(time(NULL));

    // 배열에 난수 생성하여 저장
    for (i = 0; i < 10; i++) {
        array[i] = rand();
    }

    // 초기 최대값과 최소값 설정
    max = array[0];
    min = array[0];

    // 배열을 순회하면서 최대값과 최소값 찾기
    for (i = 1; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    // 최대값과 최소값 출력
    printf("최대값은 %d\n", max);
    printf("최소값은 %d\n", min);

    return 0;
}

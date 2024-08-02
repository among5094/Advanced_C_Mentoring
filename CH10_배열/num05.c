#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 5번
int main() {
    int i, num;
    int max_count = 0;  // 가장 많이 생성된 수의 빈도를 저장할 변수
    int most_frequent;  // 가장 많이 생성된 수를 저장할 변수
    int counts[10] = {0};  // 배열 초기화

    // 난수 생성 초기화(매번 다른 수가 나오게 하기 위해서)
    srand(time(NULL));

    // 100번 난수 생성
    for (i = 0; i < 100; i++) {
        num = rand() % 10;
        counts[num]++;  // 해당 난수의 개수 증가
    }

    // 가장 많이 생성된 수 찾기
    for (i = 0; i < 10; i++) {
        if (counts[i] > max_count) {
            max_count = counts[i];
            most_frequent = i;
        }
    }

    printf("가장 많이 나온 수 = %d\n", most_frequent);

    return 0;
}

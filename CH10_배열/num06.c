#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lotto[6] = {0};
    int check[46] = {0}; // 번호가 1~45까지이므로 46 크기의 배열을 사용
    int i=0;
    srand(time(0));

    while (i < 6) {
        int num = rand() % 45 + 1; // 1~45 범위의 난수 생성
        
        if (check[num] == 0) { // 중복 확인
            lotto[i] = num;
            check[num] = 1; // 중복 방지
            i++;
        }
    }

    printf("로또 번호는 다음과 같습니다.\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", lotto[i]);
    }

    return 0;
}

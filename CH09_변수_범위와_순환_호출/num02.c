#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 주사위를 던져서 1부터 6까지의 숫자를 반환하는 함수
int get_dice_face() {
    return (rand() % 6) + 1; // 1부터 6까지의 난수 생성
}

int main() {
    // 정적 지역 변수임 
    static int count[6] = {0}; // 각 주사위 면의 횟수를 저장할 배열 (0~5번 인덱스는 각각 1~6의 면을 의미)
    int i; //반복문에서 사용되는 루프 카운터
    int face; //주사위를 던졌을 때 나온 주사위의 면

    // 난수 생성 초기화
    srand(time(0));

    // 주사위를 100번 던지기
    for (i = 0; i < 100; i++) {
        face = get_dice_face(); // 주사위 던지기(함수를 호출하여 주사위를 던진 결과를 face 변수에 저장)
        count[face - 1]++; // 나온 면의 횟수를 증가(face가 나타난 횟수를 기록)
    }

    // 결과 출력
    printf("주사위 결과:\n");
    for (i = 0; i < 6; i++) {
        printf("%d=%d\n", i + 1, count[i]); // 각 면의 횟수를 출력
    }

    return 0;
}
/*
 i + 1을 사용하는 이유는 배열의 인덱스와 주사위 면의 숫자 간의 차이를 맞추기 위해서
 배열 인덱스는 0부터 시작하는데 주사위 면은 1부터 6까지니까

*/
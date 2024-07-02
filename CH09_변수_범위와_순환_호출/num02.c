#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 9장 연습문제 2번

// 함수 선언
int get_dice_face(void);
void print_roll_counts(void);

// 각 주사위 눈의 횟수를 저장할 전역 변수
int count_1 = 0;
int count_2 = 0;
int count_3 = 0;
int count_4 = 0;
int count_5 = 0;
int count_6 = 0;

// 메인 함수
int main() {
    int total_rolls = 0;

    // 랜덤 시드 설정
    srand(time(0));

    // 주사위를 100번 던지기 위한 루프
    while (total_rolls < 100) {
        get_dice_face(); //주사위 눈을 결정하고, 해당 눈의 횟수를 증가시키는 함수
        total_rolls++; //주사위를 던진 횟수를 증가
    }

    // 주사위 눈의 횟수 출력
    print_roll_counts();

    return 0;
}

// 주사위 눈을 반환하는 함수 구현
int get_dice_face(void) {

    int face = rand() % 6 + 1;

    // 각 눈의 횟수를 증가
    switch (face) {
        case 1:
            count_1++;
            break;
        case 2:
            count_2++;
            break;
        case 3:
            count_3++;
            break;
        case 4:
            count_4++;
            break;
        case 5:
            count_5++;
            break;
        case 6:
            count_6++;
            break;
    }
    return face;
}

// 주사위 눈의 횟수를 출력하는 함수 구현
void print_roll_counts(void) {
    printf("1의 눈: %d번\n", count_1);
    printf("2의 눈: %d번\n", count_2);
    printf("3의 눈: %d번\n", count_3);
    printf("4의 눈: %d번\n", count_4);
    printf("5의 눈: %d번\n", count_5);
    printf("6의 눈: %d번\n", count_6);
}

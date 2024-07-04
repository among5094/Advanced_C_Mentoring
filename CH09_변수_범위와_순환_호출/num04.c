#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 4번 

// 함수 선언
int get_random(void);

// 메인 함수
int main() {

    printf("초기화 완료\n");
    // 여러 번 호출하여 결과를 확인
    for (int i = 0; i < 3; i++) {
        printf("%d\n", get_random());
    }
    return 0;
}

// get_random 함수 구현
int get_random(void) {
    static int inited = 0; // 정적 지역 변수, 초기화 여부를 확인

    if (!inited) {
        srand(time(0)); // 난수 생성기 시드 초기화
        inited = 1; // 초기화 되었음을 표시
    }

    return rand(); // 난수 반환
}

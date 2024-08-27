#include <stdio.h>
// 9번

// 학생들의 4.3 만점 학점을 100점 만점으로 변환하는 함수
void convert(double *grades, double *scores, int size) {

    // 배열의 모든 요소에 대해 반복
    for (int i = 0; i < size; i++) {
        scores[i] = (grades[i] / 4.3) * 100;
        // 100 : 4.3 = x : grades[i] => x = (grades[i] / 4.3) * 100
    }
}

int main() {
    double grades[10] = {0.00, 0.50, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3};
    double scores[10];// 변환된 점수를 저장할 배열
    int size = 10;// 배열의 크기

    convert(grades, scores, size);

     // 원래 grades 배열 출력
    for (int i = 0; i < size; i++) {
        printf("%.2f ", grades[i]);
    }
    printf("\n");

    // 변환된 scores 배열 출력
    for (int i = 0; i < size; i++) {
        printf("%.2f ", scores[i]);
    }
    printf("\n");
    return 0;
}

/*

grades와 scores는 배열이기 때문에,
이들이 전달된 것은 실제 배열 데이터가 아닌 포인터(배열의 첫 번째 요소의 주소)이다. 
함수 내부에서 이 포인터들을 통해 배열에 접근함.

*/

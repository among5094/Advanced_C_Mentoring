#include <stdio.h>
// 5번


int main() {
    char buffer[1000] = {0};  // 배열 선언 시 0으로 초기화

    // 첫 번째 바이트에 'a' 저장
    buffer[0] = 'a';

    // 그 다음 4바이트에 정수 100을 저장
    int *int_ptr = (int*)&buffer[1]; // 배열의 1번째 바이트부터 시작하는 주소를 정수 포인터로 변환
    *int_ptr = 100; // 해당 주소에 정수 100을 저장

    // 그 다음 4바이트에 실수 3.14를 저장
    float *float_ptr = (float*)&buffer[5]; //배열의 5번째 바이트부터 시작하는 주소를 실수 포인터로 변환
    *float_ptr = 3.14f; // 해당 주소에 실수 3.14를 저장

    // 저장된 값을 다시 출력
    printf("'%c' ", buffer[0]);
    printf("%d ", *int_ptr);
    printf("%f\n", *float_ptr);

    return 0;
}

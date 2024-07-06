#include <stdio.h>
// 12번 - 전역변수를 사용한 ATM 프로그램

double balance = 100000.0; // 현재 계좌 잔액 (전역 변수)

// 함수 선언
void display_menu();
void check_balance();
void deposit();
void withdraw();
void exit_program();

// 메인 함수
int main() {
    int choice;

    while (1) {
        display_menu();
        printf("하나를 선택하십시오: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                exit_program();
                return 0;
            default:
                printf("잘못된 선택입니다. 다시 시도하십시오.\n");
        }
    }

    return 0;
}

// 메뉴 표시 함수
void display_menu() {
    printf("\n************ Welcome to Express ATM ************\n");
    printf("(1) 잔고 확인\n");
    printf("(2) 입금\n");
    printf("(3) 출금\n");
    printf("(4) 종료\n");
}

// 잔고 확인 함수
void check_balance() {
    printf("현재 잔고는 %.2f원입니다.\n", balance);
}

// 입금 함수
void deposit() {
    double amount;
    printf("입금 금액: ");
    scanf("%lf", &amount);
    if (amount > 0) {
        balance += amount;
        printf("입금이 완료되었습니다. 새로운 잔고는 %.2f원입니다.\n", balance);
    } else {
        printf("잘못된 금액입니다. 다시 시도하십시오.\n");
    }
}

// 출금 함수
void withdraw() {
    double amount;
    printf("출금 금액: ");
    scanf("%lf", &amount);
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("출금이 완료되었습니다. 새로운 잔고는 %.2f원입니다.\n", balance);
    } else {
        printf("잘못된 금액이거나 잔고가 부족합니다. 다시 시도하십시오.\n");
    }
}

// 종료 함수
void exit_program() {
    printf("프로그램을 종료합니다. 이용해주셔서 감사합니다.\n");
}

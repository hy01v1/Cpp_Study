#include <stdio.h>

int main(void) {
    int x, sum = 0;
    do {
        printf("정수를 입력하시오(5의 배수이면 종료) : ");
        scanf("%d", &x);
        sum = sum + x;
    } while (!(x % 5 == 0));

    printf("입력된 정수들의 총합계 : %d\n", sum);

    return 0;
}


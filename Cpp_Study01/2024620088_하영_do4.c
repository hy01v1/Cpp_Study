#include <stdio.h>

int main(void) {
    int x, sum = 0;
    do {
        printf("������ �Է��Ͻÿ�(5�� ����̸� ����) : ");
        scanf("%d", &x);
        sum = sum + x;
    } while (!(x % 5 == 0));

    printf("�Էµ� �������� ���հ� : %d\n", sum);

    return 0;
}


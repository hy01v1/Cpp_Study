#include <stdio.h>

int main(void)

{
	int x, y, z, min;
	printf("ù��° ����: ");
	scanf("%d", &x);

	printf("�ι�° ����: ");
	scanf("%d", &y);

	printf("����° ����: ");
	scanf("%d", &z);

	if (x < y)
		min = x;
	else
		min = y;
	if (min < z)
		min = min;
	else
		min = z;

	printf("���� ���� % d \n", min);
	return 0;


}

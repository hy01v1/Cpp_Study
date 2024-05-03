#include <stdio.h>

int main(void)

{
	int x, y, z, min;
	printf("첫번째 정수: ");
	scanf("%d", &x);

	printf("두번째 정수: ");
	scanf("%d", &y);

	printf("세번째 정수: ");
	scanf("%d", &z);

	if (x < y)
		min = x;
	else
		min = y;
	if (min < z)
		min = min;
	else
		min = z;

	printf("작은 수는 % d \n", min);
	return 0;


}

#include <stdio.h>

int main(void)
{
	int month, days;

	printf("달은 입력하시오: ");
	scanf("%d", &month);

	switch (month)
	{
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;

	default:
		days = 0;
		printf("%d 는 없는 달 입니다.\n", month);
		break;
	}



	printf("%d월의 일수는 %d일입니다.\n", month, days);

	return 0;
}
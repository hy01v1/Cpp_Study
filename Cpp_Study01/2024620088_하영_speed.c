#include <stdio.h>

int main(void) {

	double car_speed = 80;
	double distance = 500;

	double time;
	time = distance / car_speed;

	printf("�ڵ����� �ӵ��� %.f km/h \n", car_speed);
	printf("�ڵ����� %.2f �ð� ���� ������ �Ÿ��� %.2f km �̴�.\n", time, distance);

	return 0;
}
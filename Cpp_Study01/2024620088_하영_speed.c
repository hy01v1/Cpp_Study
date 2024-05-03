#include <stdio.h>

int main(void) {

	double car_speed = 80;
	double distance = 500;

	double time;
	time = distance / car_speed;

	printf("자동차의 속도는 %.f km/h \n", car_speed);
	printf("자동차가 %.2f 시간 동안 진행한 거리는 %.2f km 이다.\n", time, distance);

	return 0;
}
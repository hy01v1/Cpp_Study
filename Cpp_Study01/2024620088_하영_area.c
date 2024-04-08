


#include <stdio.h>


#define PI 3.14

int main(void) {

	double r;
	double area;
	double peri;



	printf("원의 반지름을 실수로 입력하시오. 예<10.3> : ");

	scanf("%lf", &r);

	area = PI * r * r;
	peri = 2.0 * PI * r;

	printf("원의 둘레 : %.2f \n", peri);

	printf("원의 면적 : %.4f \n", area);



	return 0;
}






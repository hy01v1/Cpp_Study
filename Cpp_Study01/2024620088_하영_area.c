


#include <stdio.h>


#define PI 3.14

int main(void) {

	double r;
	double area;
	double peri;



	printf("���� �������� �Ǽ��� �Է��Ͻÿ�. ��<10.3> : ");

	scanf("%lf", &r);

	area = PI * r * r;
	peri = 2.0 * PI * r;

	printf("���� �ѷ� : %.2f \n", peri);

	printf("���� ���� : %.4f \n", area);



	return 0;
}






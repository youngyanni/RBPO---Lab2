#include <iostream>
#include <math.h>
void f(const double& x, double& result);

int main() {
	system("chcp 1251");
	const int x1 = 5;
	double result=0;
	double x2;
	f(x1, result);
	printf("�������� ������� ��� ���������� �������� x = %d, ����� %.4f\n", x1, result);
	printf("������� �������� ��� x:");
	scanf("%lf", &x2);
	if(x2>=0){
	f(x2, result);
	printf("�������� ������� ��� ���������������� �������� x = %.4lf, ����� %.4f\n", x2, result);
	}else printf("�������� ������ ���� ������ ��� ����� 0");
	return 0;
}

void f(const double& x, double& result) {
	result = -sqrt(x);
}
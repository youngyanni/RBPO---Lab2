#include <iostream>
#include <math.h>
using namespace std;
int main() {
	system("chcp 1251");
	const int x1 = 5;
	printf("�������� ������� ��� ���������� �������� x = %d, ����� %.4f\n",x1,-sqrt(x1));
	double x2;
	printf("������� �������� ��� x");
	scanf("%lf", &x2);
	if (x2>=0){
		printf("�������� ������� ��� ���������������� �������� x = %.4lf, ����� %.4f\n", x2,-sqrt(x2));
	}else printf("�������� ������ ���� ������ ��� ����� 0");
	return 0;
}
#include "chernysh.h"
int main() {
	system("chcp 1251");
	x = 5;
	chernysh::f();
	printf("�������� ������� ��� ���������� �������� x = %.0lf, ����� %.4f\n", x, result);
	printf("������� �������� ��� x:");
	scanf("%lf", &x);
	if (x>=0) {
		chernysh::f();
		printf("�������� ������� ��� ���������������� �������� x = %.4lf, ����� %.4f\n", x, result);
	}
	else printf("�������� x ������ ���� ������ 0");
	return 0;
}
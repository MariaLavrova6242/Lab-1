#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("������� enter ��� �����������...");
	getchar(); // �������� ������� Enter
	puts("���������� ���������");
	return 0;
}
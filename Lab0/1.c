#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("нажмите enter для продолжения...");
	getchar(); // ожидание нажатия Enter
	puts("Продоление программы");
	return 0;
}
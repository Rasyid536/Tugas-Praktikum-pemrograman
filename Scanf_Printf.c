#include <stdio.h>

int main()
{
	int panjang = 10, lebar, luas;


	printf("masukan nilai lebar : ");
	scanf_s("%d", &lebar);

	luas = panjang * lebar;
	printf("luas = %d\n", luas);

	return 0;


}

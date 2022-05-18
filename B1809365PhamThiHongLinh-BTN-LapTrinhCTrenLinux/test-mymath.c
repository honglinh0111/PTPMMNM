#include <stdio.h>
#include <math.h>
#include "libmymath.h"

int main(){
	printf("Chuong trinh Test-MyMath\n");
	printf("Tinh giai thua cua 100 la: %lf\n", tinhgiaithua(100));
	printf("Tinh tong so chan tu 1 -> 100 la: %d\n", tinhtongchan(100));
	printf("Tinh tong so le tu 1 -> 100 la: %d\n", tinhtongle(100));
	printf("Tinh luy thua 8 mu 4 la: %d\n", tinhluythua(8,4));
	return 0;
}

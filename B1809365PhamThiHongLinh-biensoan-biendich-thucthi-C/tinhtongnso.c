#include <stdio.h>

int main(){
	int n, ketqua=0;
	printf("Chuong trinh tinh tong tu 1 den N: \n");
	printf("Nhap N: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		ketqua += i;
	}
	printf("Tong tu 1 den N la: %d\n", ketqua);
	return 0;
}

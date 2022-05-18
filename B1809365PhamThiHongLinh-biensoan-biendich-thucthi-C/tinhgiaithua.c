#include <stdio.h>

int giaithua(int n){
	if(n==1){
		return 1;
	}
	return n * giaithua(n-1);
}

int main(){
	int n;
	printf("Chuong trinh tinh n giai thua\n");
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Ket qua cua %d giai thua la: %d \n", n, giaithua(n));
}

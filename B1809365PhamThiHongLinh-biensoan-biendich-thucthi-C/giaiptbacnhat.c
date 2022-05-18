#include <stdio.h>

int main(){
	float a,b;
	printf("Giai Phuong Trinh Bac Nhat ax+b=0\n");
	printf("Nhap he so a: ");
	scanf("%f", &a);
	printf("Nhap he so b: ");
	scanf("%f", &b);
	if( a==0 ){
		if( b==0 ){
			printf("Phuong trinh VO SO NGHIEM");
		}
		else{
			printf("Phuong trinh VO NGHIEM");
		}
	}
	else{
		printf("Phuong trinh co nghiem x = %f\n", -b/a);
	}
	return 0;
}

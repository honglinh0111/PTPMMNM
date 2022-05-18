#include <stdio.h>
#include <math.h>

double tinhgiaithua(int n){
	int i;
	double gt=1;
	for(int i=1; i<=n; i++){
		gt=gt*i;
	}
	return gt;
}

int tinhtongchan(int n){
	int tongchan=0;
	for(int i=1; i<=n; i++){
		if(i%2 == 0){
			tongchan += i;
		}
	}
	return tongchan;
}

int tinhtongle(int n){
	int tongle=0;
	for(int i=1; i<=n; i++){
		if(i%2 != 0){
			tongle += i;
		}
	}
	return tongle;
}

int tinhluythua(int x, int n){
	int ketqua=1;
	int i=0;
	while(i++<n){
		ketqua=ketqua*x;
	}
	return ketqua;
}		

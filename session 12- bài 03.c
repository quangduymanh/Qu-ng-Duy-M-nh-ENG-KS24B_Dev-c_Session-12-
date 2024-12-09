#include<stdio.h>
void tinhgiaithua(int n){
	if (n<0){
		printf("khong co giai thua cho so am.\n");
		return;
	}
    long long giaithua=1;
    for (int i=1;i<n;i++){
    	giaithua *=i;
	}
	printf("giai thua cua %d la:%lld\n",n,giaithua);
}
int main(){
	int n;
	printf("nhap mot so nguyen: ");
	scanf("%d",&n);
	tinhgiaithua(n);
	return 0;	
}

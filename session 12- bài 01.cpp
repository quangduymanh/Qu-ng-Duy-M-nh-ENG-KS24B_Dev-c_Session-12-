#include <stdio.h>
int tinhTong(int a, int b){
	return a+b;
}
int main() {
 	if(tinhTong(3,5)%2==0){
 		printf("tong cua 2 so la so chan");
 	}else{
 		printf("tong cua 2 so la so le");
	 }
  return 0;
}

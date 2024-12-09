#include <stdio.h>
 void inCacPhanTuTrongMang(int arr[], int size){
 	for(int i=0; i<size;i++){
 		printf("phan tu thu %d la %d \n", i+1, arr[i]);
 	}
 }
int main() {
 int numbers[]={1,2,3,4,5};
 int size= sizeof(numbers)/sizeof(numbers[0]);
 inCacPhanTuTrongMang(numbers,5);
  return 0;
}

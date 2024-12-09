#include <stdio.h>
void inPhanTuLonNhatTrongMang(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Phan tu lon nhat la: %d\n", max);
}
int main() {
    int numbers[] = {1, 2, 3, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    inPhanTuLonNhatTrongMang(numbers, size);
    return 0;
}


#include <stdio.h>

int main(){
    int so;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &so);

    if (so % 3 == 0 && so % 5 == 0) {
        printf("%d chia het cho ca 3 va 5.\n", so);
    } else if (so % 3 == 0) {
        printf("%d chia het cho 3.\n", so);
    } else if (so % 5 == 0) {
        printf("%d chia het cho 5.\n", so);
    } else {
        printf("%d khong chia het cho 3 hoac 5.\n", so);
    }

    return 0;
}

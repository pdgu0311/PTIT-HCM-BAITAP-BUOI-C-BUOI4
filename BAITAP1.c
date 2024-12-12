#include <stdio.h>

int main(){
    int so;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &so);

    if (so > 0) {
        printf("%d la so duong.\n", so);
    } else if (so < 0) {
        printf("%d la so am.\n", so);
    } else {
        printf("So ban nhap la 0.\n");
    }

    return 0;
}

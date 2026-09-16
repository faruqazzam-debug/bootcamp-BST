#include <stdio.h>

int main() {
    int HH, MM;
    int durasi;

    scanf("%d %d" , &HH, &MM);

    scanf("%d" , &durasi);

    int total_menit_mulai = HH * 60 + MM;

    int total_menit_selesai = total_menit_mulai + durasi;

    if (total_menit_selesai <= 780) {
    printf("MASIH WAKTU");
} else {  
    printf("LEWAT WAKTU");
}

}
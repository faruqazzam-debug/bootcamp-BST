#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int volume[100];
    int total = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &volume[i]);
        total += volume[i];
    }

    if (total > 1000) {
        printf("Yahh tumpah, jadi mubazir deh");
    } else if (total < 1000) {
        printf("Masih belum penuh ini mahh, tuang lagi dong");
    } else {
        printf("Nahh pas nihh, tinggal minum deh");
    }
    
    return 0;
}
#include <stdio.h>

int main(void) {
    int m[] = {10, 20, 30}, n[] = {10, 20, 30};
    int sizeof_m = sizeof(m) / sizeof(m[0]);
    int sizeof_n = sizeof(n) / sizeof(n[0]);
    int same_count = 0;

    printf("배열 m: ");
    for (int i = 0; i < sizeof_m; i++) {
        printf("%d ", m[i]);
    }
    printf("\n");

    printf("배열 n: ");
    for (int i = 0; i < sizeof_n; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");

    printf("m의 크기는 %d\n", sizeof_m);
    printf("n의 크기는 %d\n", sizeof_n);

    for (int i = 0; i < sizeof_m; i++)
        if (m[i] == n[i])
            same_count++;

    if (same_count == sizeof_m)
        printf("m과 n은 같다\n");
    else
        printf("m과 n은 같지 않다\n");
}

#include <stdio.h>

int main() {
    int m[] = {10, 20, 30}, n[] = {10, 20, 30};
    int size1 = sizeof(m) / sizeof(m[0]);
    int size2 = sizeof(n) / sizeof(n[0]);
    int same_count = 0;

    printf("배열 m : ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", m[i]);
    }
    printf("\n");

    printf("배열 n : ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");

    printf("m의 크기는 %d\n", size1);
    printf("n의 크기는 %d\n", size2);

    // 배열 크기가 같을 때만 비교
    if (size1 == size2) {
        for (int i = 0; i < size1; i++) {
            if (m[i] == n[i]) {
                same_count++;
            }
        }
    }

    if (same_count == size1 && size1 == size2) {
        printf("m과 n은 같다\n");
    } else {
        printf("m과 n은 다르다\n");
    }

    return 0;
}

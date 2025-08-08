#include <stdio.h>

int main() {
    int odd[5] = {1, 3, 5, 7, 9};
    int even[5] = {2, 4, 6, 8, 10};

    printf("odd의 원소 : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", odd[i]);
    }

    printf("\neven의 원소 : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", even[i]);
    }

    printf("\n");
    return 0;
}

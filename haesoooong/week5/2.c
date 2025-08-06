#include <stdio.h>

int main() {
    int odd[] = {1, 3, 5, 7, 9};
    int even[] = {2, 4, 6, 8, 10};

    // sizeof(odd)를 하면 odd의 원소 수 x int 타입의 크기(여기서는 4바이트)가 되기 때문에 임의의 원소로 나눠줌.
    for (int i = 0; i < sizeof(odd) / sizeof(odd[0]); i++) {
        printf("odd[%d] = %d\n", i, odd[i]);
    }

    for (int i = 0; i < sizeof(odd) / sizeof(odd[0]); i++) {
        printf("even[%d] = %d\n", i, even[i]);
    }
}

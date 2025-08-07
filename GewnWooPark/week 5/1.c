#include <stdio.h>

int get_max(int a, int b) {
    return (a > b) ? a : b;
}

int get_min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a, b, c, d;

    printf("정수 네 개를 입력하시오 : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max1 = get_max(a, b);
    int max2 = get_max(c, d);
    int final_max = get_max(max1, max2);

    int min1 = get_min(a, b);
    int min2 = get_min(c, d);
    int final_min = get_min(min1, min2);

    printf("네 정수의 최대값 : %d\n", final_max);
    printf("네 정수의 최소값 : %d\n", final_min);

    return 0;
}

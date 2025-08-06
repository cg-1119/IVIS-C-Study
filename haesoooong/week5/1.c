#include <stdio.h>

int get_max(int x, int y) {
    if(x > y)
        return x;
    else
        return y;
}

int get_min(int x, int y) {
    if(x < y)
        return x;
    else
        return y;
}

int main(void) {
    int a, b, c, d, max, min;

    printf("정수 네 개를 입력하시오: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = get_max(a, b);
    max = get_max(max, c);
    max = get_max(max, d);

    min = get_min(a, b);
    min = get_min(min, c);
    min = get_min(min, d);

    printf("네 정수의 최대값: %d\n", max);
    printf("네 정수의 최소값: %d\n", min);
}

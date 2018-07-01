#include <stdio.h>

int main() {
    int a, b, c, d, e,sum;
    printf("please input first");
    scanf("%d", &a);
    printf("please input second");
    scanf("%d", &b);
    printf("please input three");
    scanf("%d", &c);
    printf("please input four");
    scanf("%d", &d);
    printf("please input five");
    scanf("%d", &e);
    sum = (a+b+c+d+e) / 5;
    printf("final score:%d",sum);
    return 0;
}

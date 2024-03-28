
#include <stdio.h> 

int main(void) {
    int a, b, c;
    printf("input number:");
    scanf_s("%d", &a);
    printf("input number:");
    scanf_s("%d", &b);
    printf("input number:");
    scanf_s("%d", &c);

    if (a > b && a > c)
        printf("biggest number:%d\n", a);
    else if (b > a && b > c)
        printf("biggest number:%d\n", b);
    else
        printf("biggest number:%d\n", c);

    return 0;

}
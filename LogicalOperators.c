#include <stdio.h>

int main() {

    int x, y, m, p, q;
    x = 0;
    y = 1;
    m = x && y;
    p = x || y;
    q = !x;
    printf("here we have:\nx=%d\ny=%d\nm=%d\np=%d\nq=%d\n", x, y, m, p, q);
    return 0;
}

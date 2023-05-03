//
// Created by hojat.ghasemi on 2023-05-02.
//
#include <stdio.h>

int main() {
    int x, y = 67, m;
    x = sizeof y;
    m = sizeof(u_int64_t);
    printf("Size of Y on this machine : %d\n", x);
    printf("Size of u_int32_t on this machine : %d", m);
    return 0;
}
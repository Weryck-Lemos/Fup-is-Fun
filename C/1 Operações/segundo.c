#include <stdio.h>

int main() {
    int s, h, m;
    scanf("%d",&s);

    h = s/3600;
    s %=3600;
    m = s/60;
    s %=60;

    printf("%d:%d:%d\n", h, m, s);
    return 0;
}

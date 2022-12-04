#include <stdio.h>
#include <stdlib.h>
void (*foo)();
int main(void) {
    char *name[] = {"Miller", "Jones", "Anderson"};
    printf("%c\n", *(*(name+1)+2));
    printf("%c\n", name[1][2]);
    int num = 5;
    int *pi = &num;
    printf("%d\n", *pi);
    *pi = 200;
    printf("%d\n", *pi);
    // pi = NULL;
    // printf("%d\n", *pi);
    *pi = 100;
    printf("%d\n", *pi);
    return 0;
}
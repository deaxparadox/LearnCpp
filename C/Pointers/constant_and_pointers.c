#include <stdio.h>
#include <pthread.h>


void constant_and_pointer(void) {
    int num = 5;
    const int limit = 500;
    int *pi;
    const int *pci;

    pi = &num;
    pci = &limit;

    printf("    num - Address: %p   value: %d\n", &num, num);
    printf("limit - Address: %p     value: %d\n", &limit, limit);
    printf("    pi - Address: %p   value: %d\n", &pi, pi);
    printf("pci - Address: %p     value: %d\n", &pci, pci);
}

void constants(void) {
    const int limit = 500;
    const int * const cpci = &limit;
    const int * const * pcpci = &cpci;

    printf("%d\n", *cpci);
    pcpci = &cpci;
    printf("%d\n", **pcpci);
}

int main(void) {
    // constant_and_pointer();
    constants();
    return 0;
}

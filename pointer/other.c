#include <stdio.h>

int main() {
    int a = 42;
    int *ptr = &a;

    printf("Value of a: %d\n", a);        // 42
    printf("Value using *ptr: %d\n", *ptr); // 42 (dereferencing `ptr`)
    printf("Address of a: %p\n", &a); // Address of `a`
    printf("Value of ptr: %p\n", ptr); // Address of `a` (same as above)
    printf("Address of ptr: %p\n", &ptr); // Address of the pointer variable `ptr`

    return 0;
}

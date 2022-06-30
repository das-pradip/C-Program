#include <stdio.h>
int reverse(int n) {
    int rem, rev = 0;
    while (n) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;  
}

int main(void)
{
    int i = 123;
    printf("Original integer: %d  ",i);
    printf("\nReverse integer: %d  ",reverse(i));
    i = 208478933;
    printf("\nOriginal integer: %d  ",i);
    printf("\nReverse integer: %d  ",reverse(i));
    i = -73634;
    printf("\nOriginal integer: %d  ",i);
    printf("\nReverse integer: %d  ",reverse(i));
    return 0;
}

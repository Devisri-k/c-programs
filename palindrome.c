#include <stdio.h>
int main() {
  int n, m = 0, r, o;
    printf("Enter an integer: ");
    scanf("%d", &n);
    o = n;
    while (n != 0) {
        r = n % 10;
        m = m * 10 + r;
        n /= 10;
    }
    if (o == m)
        printf("%d is a palindrome.", o);
    else
        printf("%d is not a palindrome.", o);

    return 0;
}
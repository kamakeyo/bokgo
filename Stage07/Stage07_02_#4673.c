#include <stdio.h>

void Dn(int n, int* arr) {        
    int dn = n;
    while (n != 0) {
        dn = dn + n % 10;
        n /= 10;
    }
    if (dn <= 10000) {
        arr[dn]++; 
        Dn(dn, arr);
    }
}
int main() {

    int i;
    int arr[10001] = { 0 };
    for (i = 1; i <= 10000; i++)
        Dn(i, arr);
    for (i = 1; i <= 10000; i++)
        if (arr[i] == 0)
            printf("%d\n", i);
}
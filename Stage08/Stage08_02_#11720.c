#include <stdio.h>

int main() {
    int n, i, sum = 0;
    char arr[100];
    scanf("%d", &n);
    scanf("%s", arr);
    for (i = 0; i < n; i++)
        sum = sum + arr[i] - '0';
    printf("%d", sum);
}
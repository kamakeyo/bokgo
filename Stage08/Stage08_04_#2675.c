#include <stdio.h>
#include <string.h>

int main() {
    int n, m, num=0;
	char arr[21];
    scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &m);
		scanf("%s", arr);
		for(int k=0; k<strlen(arr); k++){
		for(int j=0; j<m; j++){
			printf("%c", arr[num]);
		}
			num++;
	}
		num = 0;
	printf("\n");
		}
	}
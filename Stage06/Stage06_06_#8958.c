#include <stdio.h>
#include <string.h>
int main(){
	int n, i, sum=0, count=0;
	char arr[80];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%s", arr);
		for(int j = 0; j < strlen(arr); j++){
			if(arr[j] == 'O'){
				count++;
				sum = sum + count;
			}
			else
				count = 0;
		}
		printf("%d\n", sum);
		count = 0;
		sum = 0;
	}
	}





#include <stdio.h> 
#include <string.h>
int main() {
	int i, j, sum = 0;
	char arr[101];
	scanf("%s", arr);
	sum = strlen(arr);
	for(j = 0; j < strlen(arr); j++){
		if((arr[j] == 'l' || arr[j] == 'n') && arr[j+1] == 'j')
			sum--;
		if(arr[j] == 'd' && arr[j+1] == 'z' && arr[j+2] == '=')
			sum--;
		if(arr[j] == '=' || arr[j] == '-')
			sum--;
	}
	printf("%d", sum); 
}


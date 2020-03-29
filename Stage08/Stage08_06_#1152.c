#include <stdio.h>
#include <string.h>
int main(){
	int count = 0, check = 1;
	char arr[1000001];
	gets(arr);
	for(int i = 0; i < strlen(arr); i++){
		if(check){ 
			if(arr[i] != ' '){
				count++;
				check = 0;
			}
		}
		else
			if(arr[i]== ' ')
				check = 1;
			}
	printf("%d", count);
	}

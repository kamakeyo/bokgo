#include <stdio.h>
int main() {
	int num, n, m;
	scanf("%d", &num);
		for(n=1; n<=2*num-1; n++){
			if(n<=num){			
			for(m=1; m<=n-1; m++)
				printf(" ");
			for(m=n; m<=2*num-n; m++)	
				printf("*");	
					}
			else{
			for(m=1; m<2*num-n; m++)
				printf(" ");
			for(m=1; m<=(n-num)*2+1; m++)					
				printf("*");	
					}
		printf("\n");			
		}
	}	

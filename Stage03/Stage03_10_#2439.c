#include <stdio.h>
int main() {
	int a,b,c,n;
	scanf("%d",&n);
	
	
	for(b=1; b<=n; b++){
		for(c=b; c<n; c++)	
		printf(" ");
	
			for(a=1; a<=b; a++)		
			printf("*");
			printf("\n");
		
	}
}

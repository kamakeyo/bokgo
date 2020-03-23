#include <stdio.h>
int main() {
	int a,b,n;
	scanf("%d",&n);
	
	for(b=1; b<=n; b++){
		for(a=1; a<=b; a++)		
		printf("*");
		printf("\n");
	}

}

#include <stdio.h>

int main(void){
	int n, m=0, a[9], max=0;
	for(n=0; n<=8; n++){
		scanf("%d", &a[n]);
		if(max<a[n]){
			max = a[n];
			m = n;
		}	
	}
	printf("%d\n", max);
	printf("%d", m+1);
	
}
#include <stdio.h>
int main() {
	int num, n, max=-1000001, min=1000001;
	scanf("%d", &num);
	int a[num];
		for(n=0; n<=num-1; n++){
			scanf("%d", &a[n]);
			if(max < a[n])
			max = a[n];		
			if(min > a[n])
			min = a[n];
	}
	printf("%d %d", min, max);
	}	

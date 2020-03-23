#include <stdio.h>

int main(){
	double max=0, a[1000], sum=0;
	int n, m;
	scanf("%d", &n);
	for(m=0; m<=n-1; m++){
		scanf("%lf", &a[m]);
		if(max<=a[m])
			max = a[m];
		}
	for(m=0; m<=n-1; m++){
		a[m] = (a[m]/max)*100;
		sum = sum + a[m];
	}
	printf("%lf", sum/n);
} 

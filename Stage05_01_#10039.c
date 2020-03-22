#include <stdio.h>
int main() {
	int sum=0,n,a;
	for(n=1; n<=5; n++){
		scanf("%d",&a);
		if(a<40)
			a = 40;
		sum = sum + a;
	}
		printf("%d",sum/5);
	}
#include <stdio.h>
int main() {
	int n, num, m, a[3],temp;
	for(n=0; n<=2; n++){
		scanf("%d", &num);
		a[n] = num;
		}
	
	for(m=1; m<=3; m++){
	for(n=0; n<=1; n++){
		if(a[n]>a[n+1]){	
		temp = a[n];
		a[n] = a[n+1];
		a[n+1] = temp;
			}	
		}
	}
	printf("%d",a[1]);	
	}

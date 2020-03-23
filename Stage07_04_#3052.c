#include <stdio.h>

int main(){
	int n, m=0, a[10],num, count=0;
		for(n=0; n<=9 ; n++){
			scanf("%d", &num);
			a[n] = num%42;
		}

		for(n=0; n<=8; n++){
			for(m=n+1; m<=9; m++){
				if(a[n] == a[m])
					a[m] = -1;
			}
		}
		for(n=0; n<=9; n++){
			if(a[n] >= 0)
				count ++;
		}
		printf("%d", count);
}
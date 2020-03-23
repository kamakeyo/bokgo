#include <stdio.h>

void han(int n){
		int m, count=0;
		if(n<100)
			printf("%d",n);
		else{
			for(m=100; m<=n; m++)
				if( (m/100 - (m%100-m%10)/10) == ((m%100-m%10)/10 - m%10))
					count++;
				printf("%d", 99+count);	
		}
}
int main(void){
	int n;
	scanf("%d", &n);
	han(n);
	}
		

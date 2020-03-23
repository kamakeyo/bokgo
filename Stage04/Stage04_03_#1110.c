#include <stdio.h>
int main() {
	int n;
	int temp = 0;
	int count = 0;
	scanf("%d", &n);
	temp = n;
	while(1){
		n = (n%10)*10 + ((n/10 + n%10)%10);
		count++;
		if(temp==n)
		break;
	}
	printf("%d",count);
}

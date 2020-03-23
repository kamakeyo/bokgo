#include <stdio.h>
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	if (a>=0 && b-45>=0)
	printf("%d %d",a,b-45);
	else if(a>0 && b-45<0)
	printf("%d %d",a-1,b+15);
	else if(a==0 && b-45<0)
	printf("%d %d",a+23,b+15);
	}

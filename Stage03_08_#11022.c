#include <stdio.h>
int main() {
	int n,m,a,b;
	scanf("%d",&n);
	for(m=1; m<=n; m++)		{
		
	scanf("%d %d",&a,&b);		
	printf("Case #%d: %d + %d = %d\n",m,a,b,a+b);
	}
}
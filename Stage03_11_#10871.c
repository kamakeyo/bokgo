#include <stdio.h>
int main() {
	int a,b,n,m;	
	scanf("%d %d",&n,&m);
	for(a=1; a<=n; a++){
		scanf("%d",&b);
		if(b<m)
			printf("%d ",b);
	}
}
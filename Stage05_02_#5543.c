#include <stdio.h>
int main() {
	int n, b, min_b, side, min_side;
		scanf("%d",&b);
		min_b = b;
	for(n=1; n<=2; n++){
		scanf("%d",&b);
		if(min_b>b)
			min_b = b;
			}
			scanf("%d", &side);
				min_side = side;
			scanf("%d",&side);
		if(min_side>side)
				min_side = side;
		printf("%d",min_b+min_side-50);
	}
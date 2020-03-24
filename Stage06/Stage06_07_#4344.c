#include <stdio.h>

int main(){
	int i, j, n, a[1000],m, count=0;
	double avg = 0.0, res[1000];

	scanf("%d", &n);

	for(i=0;i<=n-1; i++){
		scanf("%d", &m);
		for(j=0; j<=m-1; j++){
			scanf("%d", &a[j]);
			avg = avg + (double)a[j];
		}
		avg = avg / (double)m;
		for(j=0; j<=m-1; j++){
			if((double)a[j] > avg)
				count++;
		}

		res[i] = ((double)count/(double)m)*100.0;
		avg = 0.0;
		count = 0;
}
		for(i=0; i<=n-1; i++)
		printf("%.3lf%%\n", res[i]);
}


#include <stdio.h>

int main(void){
	int a[9], n1, n2, n3,num=0, m, q, count=0, w,e=1;
	scanf("%d %d %d", &n1, &n2, &n3);
		num = n1 * n2 * n3;			
			for(w=0; num!=0; w++)
		 		num = num / 10;	 
		num = n1 * n2 * n3;			
				for(m=0; m<=w-1; m++){	 
					for(q=m+1; q<=w-1; q++)
						e = e * 10;
				a[m] = (num/e)%10;
			e = 1;		
		}	/*
	a[0] = num/100000000;
	a[1] = (num/10000000)%10;
	a[2] = (num/1000000)%10;
	a[3] = (num/100000)%10;
	a[4] = (num/10000)%10;
	a[5] = (num/1000)%10;
	a[6] = (num/100)%10;
	a[7] = (num/10)%10;
	a[8] = num%10;    
	*/	
		for(q=0; q<=9; q++){
			for(m=0; m<=w-1; m++)
				if(a[m]==q)
				count++;
		printf("%d\n", count);			
		count = 0;
		}
		}
	/*	
		for(q=0; q<=9; q++){
		for(m=0; m<=8; m++){
			if(a[m] == q)				
				count++;
			}
		if(q==0)	
			printf("%d\n", count+w-9);
		else
			printf("%d\n", count);
}
			count = 0;
	}
	*/
	
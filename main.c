#include <stdio.h>
 
int main(void) {
	int N, i;
	printf("Total Number Of Element = ");
	scanf("%d", &N);
	int numArray[N];
	
	printf("Element are = ");
	for (i=0;i<N; i++) {
    	scanf("%d", &numArray[i]);
	}
	
	int sum = 0;
	for(i=0;i<N;i++){
	    sum +=numArray[i];
	}
	printf("Sum of Total Nuber is = %d\n",sum);
	return 0;
}
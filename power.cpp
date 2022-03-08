#include <stdio.h>
#include <math.h>

main(){
	int n1, base;
	float result;
	printf("Enter a number: ");
	scanf("%d",&n1);
	printf("\nInform the base: ");
	scanf("%d", &base);
	result = log(n1) / log(base);
	if(pow(base,result) == n1){
		printf("%d = %d^%0.0f", n1,base, result);
	}
	else{
		printf("%d is not a power of %d", n1, base);
	}
	
	
	return 0;
}

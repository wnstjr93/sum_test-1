#include "sum.h"

int sum(int n){
	int i;
	int temp=0;
	for(i=1; i<=n; i++)
		temp+=i;
	
	return temp;
}


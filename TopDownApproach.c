#include <stdio.h>


//We are using memoization here , to avoid dyplicate calculation efforts

//Steps are as follows
//1. Declare an array with sub-problem results.
//2. Assign values == -1.  -1 indicate this sub-problem is not yet solved.
//3.Before solving any recursive call, check if sub-problem needs to be solved or its already solved dueing previous computations.


//Problem:  CALCULATE FIB(4) Using Top Down Approach


//Better steps as follows.
// Fib[0] = 0
//Fib [1] = 1  Should be saved first;
//

int size= 10;
int result[10];
void init_result()
{
	
	int i;
	result[0] = 0;
	result[1] = 1;
	
	for(i = 2; i < size; i++){
		result[i] = -1;
	}
	
	return;
	
}

int fibbo(int N){
	if(result[N] == -1){
		result[N] = fibbo(N-1) + fibbo(N-2);
	}  
	
	return result[N];
}

int main(){
	
	init_result();
	printf("Fibbonacci of 5 is   %d\n", fibbo(5));
	
	return 0;
}

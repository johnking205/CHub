//Code used to solver Project Euler #1
#include <stdio.h>

int main() {
	
	int i;
	int sum = 0;

	for(i = 0; i < 1000; i++){
		if(!(i%3) || !(i%5)){
			sum += i;
		}
	}

	
	printf("%d\n", sum);
	return 0;
}

#include <stdio.h>

int main() {
	
	int i;
	int sum = 0;

	for(i = 0; i < 1000; i++){
		if(!(i%3) || !(i%5)){
			sum += i;
		}
	}
	 printf("%d", sum);
	return 0;
}
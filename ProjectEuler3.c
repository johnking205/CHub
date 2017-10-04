//Code used to solver Project Euler #3
#include <stdio.h>

int main(){

    void printPrimeFactors(long long input){
        long long i = 2;
        while(i <= input){
            if(!(input % i)){
                printf("%d\n", i);
                printPrimeFactors(input / i);
                break;
            }
            i++;
        }
        //printf("%d\n", input);
    }
    printPrimeFactors(600851475143);
    return 0;
}
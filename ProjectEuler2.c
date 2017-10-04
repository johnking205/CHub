//Code used to solver Project Euler #2
#include <stdio.h>

int main(){

    int prevPrevTerm = 0;
    int prevTerm = 1;
    int term = 0;
    int evenFiboSum = 0;

    while(term < 4000000){
        term = prevTerm + prevPrevTerm;

        prevPrevTerm = prevTerm;
        prevTerm = term;

        if(!(term%2)){
            evenFiboSum += term;
        }
    }
    printf("%d", evenFiboSum);

    return 0;
}
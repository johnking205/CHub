#include <stdio.h>
#include <string.h>

int main(){
    int fact1;
    int fact2;

    int product;
    int biggestPalin = 0;
    int productLen;
    char productStr[6];

    for(fact1 = 100; fact1 <= 999; fact1++){
        for(fact2 = 100; fact2 <= 999; fact2++){
            product = fact1 * fact2;
            productLen = sprintf(productStr, "%d", product);
            
            if(productLen == 5){
                if(productStr[0] == productStr[4] && productStr[1] == productStr[3]){
                    if(product > biggestPalin){
                        biggestPalin = product;
                    }
                }
            }
            else if(productLen == 6){
                if(productStr[0] == productStr[5] && productStr[1] == productStr[4] && productStr[2] == productStr[3]){
                    if(product > biggestPalin){
                        biggestPalin = product;
                    }
                }
            }
        }
    }
    printf("%d", biggestPalin);
    return 0;
}
#include <stdio.h>

int main(){
    int counter = 25;

    while(counter>=0){
        printf("Counter value= %d\n", counter);
        counter-=1;
    }

    return 0;
}
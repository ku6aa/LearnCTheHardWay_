#include <stdio.h>

char letterToLowercase(char letter);


int main(){
    char letters[] = {'A'};
    for(int i=60; i<100; i++){
        letters[i]= (char)i;
        char letter = letterToLowercase(letters[i]);
        printf("Returned letter %c\n",letter);
    }
   

    return 0;
}


char letterToLowercase(char letter){
    if((int)letter>64 && (int)letter<91){
        printf("Letter decimal value: %d\n",(int)letter);
        int letterDec = (int)letter + 32;
        return (char) letterDec;

    } else {
       // printf("Letter does not need a conversion\n");
    }
    return letter;
}
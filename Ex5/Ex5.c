#include <stdio.h>
#include <stdbool.h>

int func1(int var1, int var2);
typedef unsigned char byte;  // so byte take values form range 0 - 255

union un {
    int member1;
    char member2;
    float member3;
};

int main(){

if(1<0) {
//CODE;
} else if(2<0) {
//CODE;
} else {
//CODE;
}

int OPERAND = 1;

switch (OPERAND) {
case 1:
    //CODE;
    break;
case 2:
    //CODE;
    break;    

default:
    //CODE;
    printf("Union");
    break;
}

bool TEST = 0;

while(TEST) {
//CODE;
}

do {
//CODE;
} while(TEST);


   // defining a union variable
    union un union1;
 
    // initializing the union member
    union1.member1 = 15;
 
    printf("The value stored in member1 = %d",
           union1.member1);

return 0;
}

int func1(int var1, int var2){
return var1+var2;
}
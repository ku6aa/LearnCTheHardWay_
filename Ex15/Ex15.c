#include <stdio.h>

int main(){
    int values[]= {21,34,21,35,67};
    char *names[]= {"Mark","Tom","Peter","John","Clare"};
    //char *names2[] = {'A', 'n', 'n', 'A'};
    /*pointers 
    */
    int countValues = sizeof(values)/sizeof(int);
    
    for(int i=0; i<countValues; i++){
        printf("%s value is %d\n",names[i], values[i]);
    }
    printf("---\n");

    int *cur_values = values;
    char **cur_name = names;

    for (int i = 0; i < countValues; i++) {
         printf("%s is %d years old.\n",*(cur_name + i), *(cur_values + i));
    }

    printf("---\n");

    for (int i = 0; i < countValues; i++) {
        printf("%s is %d years old again.\n", cur_name[i],
        cur_values[i]);
    }

    printf("---\n");


    for (cur_name = names, cur_values = values;
        (cur_values - values) < countValues; cur_name++, cur_values++) {
        printf("%s lived %d years so far.\n", *cur_name,*cur_values);
    }


   


    return 0;
}
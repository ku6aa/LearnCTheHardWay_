#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


struct Pet {
    char *name;
    int age;
    int height;
    int weight;
};


struct Pet *Pet_create(char *name, int age, int height, int weight){
    struct Pet *who = malloc(sizeof(struct Pet));
    assert(who != NULL);

    who->name = strdup(name);
    who->age= age;
    who->height = height;
    who->weight = weight;

    return who; 
}


void Pet_destroy(struct Pet *who){
    assert(who != NULL);

    free(who->name);
    free(who);
}

void Pet_print(struct Pet *who){
    printf("Name: %s\n", who->name);
    printf("Age: %d\n", who->age);
    printf("Height: %d\n", who->height);
    printf("Weight: %d\n", who->weight); 
}


int main(){
    struct Pet *Fafik = Pet_create("Fafik", 5, 5, 8);
    struct Pet *Burek = Pet_create("Burek", 8, 12, 14);

    printf("Fafik is at memory location %p\n", Fafik);
    printf("Burek is at memory location %p\n", Burek);

    Pet_print(Fafik);

    Pet_destroy(Fafik);
    Pet_destroy(Burek);

}
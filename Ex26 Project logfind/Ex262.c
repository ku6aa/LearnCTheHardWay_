#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>


void ChangeDirectory(){
    const char *dir = "C:/MinGW/bin";

    if (chdir(dir) == 0) {
        printf("Successfully changed directory to %s\n", dir);
    } else {
        perror("chdir failed");
    }
}

void ListFiles(){
    DIR *d = opendir(".");
    if (d == NULL) {
        perror("opendir failed");
        return 1;
    }

    struct dirent *entry;
    while ((entry = readdir(d)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(d);
}


void findFile(){

}

int main(){
ChangeDirectory();
ListFiles();
return 0;
}
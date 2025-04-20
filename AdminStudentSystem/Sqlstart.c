#include <stdio.h>
#include <unistd.h>
#include <windows.h>

int main() {
    char* path = "C:\\xampp\\mysql\\bin";
    if(chdir(path) == 0) {
        system("mysqld --console");
    }
    else {
        printf("Error");
    }

    return 0;
}
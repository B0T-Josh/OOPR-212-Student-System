#include <stdio.h>
#include <unistd.h>
#include <windows.h>

int main() {
    system("powershell -Command "
        "\"Start-Process ./Sqlstart\"");
    if (chdir("dist") == 0) {
        system(
            "powershell -Command "
            "\"Start-Process java -ArgumentList '-cp StudentSystem.jar;lib/* studentsystem.StudentSystem'; ");
    } else {
        printf("Error\n");
    }

    return 0;
}

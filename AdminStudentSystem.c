#include <stdio.h>
#include <unistd.h>
#include <windows.h>

int main() {
    system("powershell -Command "
        "Start-Process ./Sqlstart");
    sleep(01); 
    if (chdir("dist") == 0) {
        system("powershell -Command java -cp 'AdminStudentSystem.jar;lib/*' adminstudentsystem.AdminStudentSystem; taskkill /F /IM Sqlstart.exe /T; taskkill /F /IM ConsolePauser.exe /T");
        return 0;
    } else {
        printf("Error\n");
    }

    return 0;
}

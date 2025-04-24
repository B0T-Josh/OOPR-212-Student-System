#include <stdio.h>
#include <windows.h>

int main() {
    system("powershell -Command "
        "Start-Process ./Sqlstart");
        sleep(1);
    if (chdir("dist") == 0) {
        system("powershell -Command java -cp 'StudentSystem.jar;lib/*' studentsystem.StudentSystem; taskkill /F /IM Sqlstart.exe /T; taskkill /F /IM ConsolePauser.exe /T");
    } else {
        printf("Error\n");
    }

    return 0;
}

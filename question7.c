#include <stdio.h>

//2303510100070
//Raksha bajpayi
int main() {
    int totalMinutes, hours, minutes;
    printf("Input total minutes: ");
    scanf("%d", &totalMinutes);
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;
    printf("%02d : %02d\n", hours, minutes);
    return 0;
}

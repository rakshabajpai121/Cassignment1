#include <stdio.h>

//2303510100070
//Raksha bajpayi
int main() {
    float kmPerHour, milesPerHour;
    printf("Input kilometres per hour: ");
    scanf("%f", &kmPerHour);
    milesPerHour = kmPerHour * 0.621371;
    printf("%.6f miles per hour\n", milesPerHour);
    return 0;
}

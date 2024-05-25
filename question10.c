#include <stdio.h>
#include <math.h>

/* 
10. Write a C program that calculates the volume of a sphere.
(Formula : V = 4/3*π*r*r*r)
Expected Output:
Input the radius of the sphere : 2.56
The volume of sphere is 70.276237.
*/
// Raksha bajpayi
// 2303510100070
int main() {
    float radius, volume;
    const float pi = 3.14159265359;

    printf("Input the radius of the sphere : ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * pi * pow(radius, 3);

    printf("The volume of sphere is %f.\n", volume);

    return 0;
}

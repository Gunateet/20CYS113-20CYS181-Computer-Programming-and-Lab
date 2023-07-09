#include <stdio.h>

int main() {
    // Write C code here
union days{ 
    int distance;
    float length;
}u;

printf("enter the value nof distance");
scanf("%d",& u.distance);
printf("enter the value nof length");
scanf("%f",& u.length);
printf("%d",u.distance);

    return 0;
}

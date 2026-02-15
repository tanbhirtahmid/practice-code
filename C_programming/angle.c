#include <stdio.h>
#include <math.h>

int main() {
    int angle=0;
    float cosine;
    printf("Angle       cos(angle)\n");
    printf("-----       ----------\n\n");
    for (angle = 0; angle <= 180; angle+=10)
    {
        cosine=cos(angle);
        printf("%d      %f\n", angle, cosine);
    }
    


}
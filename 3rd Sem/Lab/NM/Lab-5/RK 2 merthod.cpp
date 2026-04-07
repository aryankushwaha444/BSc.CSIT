#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float f(float x,float y)
{
    return((2*y)/x);
}

int main() {
    float x0, y0, h, xn, x, y, k1, k2, k, x1, y1;
    int n;
    
    printf("Enter Initial Condition\n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("y0 = ");
    scanf("%f", &y0);
    printf("Enter calculation point xn = ");
    scanf("%f", &xn);
    printf("Enter no of steps n: ");
    scanf("%d", &n);
    
    h = (xn - x0) / n;
    x = x0;
    y = y0;
    
    //printf("\nx\t\ty");
    for (int i = 0; i < n; i++) {
        k1 = f(x, y);
        k2 = f(x + h, y + k1*h);
        
        k = 0.5 * (k1 + k2);
        y1 = y + (k*h);
        x1 = x + h;
        x = x1;
        y = y1;
        printf("\ny(%f)=%.4f",x,y);
    }
    printf("\n\tBy Aaryan Kushawaha");
    return 0;
}


#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main(){
    int x,y,x0,y0,r,R;
    x0 = 0;
    y0 = 2;
    r = 3;
    R = 5;
    
    printf("Введите x=_\b");
    scanf("%d", &x);
    printf("Введите y=_\b");
    scanf("%d", &y);

    if (pow((x - x0),2) + pow((y - y0),2) <= R*R && pow((x - x0),2) + pow((y - y0),2) >= r*r)
    {
        if (x > 0 && y < 0)
        {
            printf("false\n");
        }
        else
        {
            printf("true\n");
        }
    }
    else{
        printf("false\n");
    }
}
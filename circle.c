#include<stdio.h>
#include<math.h>
int circle(float radi)
{
    return M_PI*radi*radi;
}
int main()
{
    float radi;
    printf("enter the radius");
    scanf("%f",&radi);
    float area=circle(radi);
    printf("\narea is %f",area);
    return 0;
}
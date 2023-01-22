#include<stdio.h>
#define f(x,y) (x*x-y*y)
void main()
{
    float x0,y0,xn,yn,h,value;
    int i,n;
    printf("enter the initial conditions: ");
    printf("\nx0: ");
    scanf("%f",&x0);
    printf("\ny0: ");
    scanf("%f",&y0);
    printf("\nenter the value of xn: ");
    scanf("%f",&xn);
    printf("\nenter the value of h: ");
    scanf("%f",&h);
    n=(xn-x0)/h;
    printf("iteration:%d",n);

    printf("\nx0\t\ty0\t\tvalue\t\tyn");

    for(i=0;i<=n;i++)
    {
        value=f(x0,y0);
        yn=y0+(h*value);
        printf("\n%f\t%f\t%f\t%f\t%f",x0,y0,value,yn);
        y0=yn;
        x0=x0+h;
    }
    printf("\nvalue of yn at x=%f = %f",xn,yn);
}

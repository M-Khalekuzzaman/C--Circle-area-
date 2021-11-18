#include<stdio.h>
#include<math.h>
int main()
{
    double r,area;
    printf("Enter circle radius :");
    scanf("%lf",&r);

    area = 3.1416*r*r;  //PI=3.1416
    /* area = 3.1416*r*r */
    printf("Total Area is :%.2lf\n",area);
    getch();

}

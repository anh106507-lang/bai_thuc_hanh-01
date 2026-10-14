#include <stdio.h>
#include <math.h>
int main(){
float a,b, c;
printf("NHAP a, b, c: ");
scanf("%f %f %f", &a, &b, &c);
double p, s;
//nhap a,b,c
if(a +b > c && a+c>b && b+c>a)
{
  p = (a +b + c)/2;
  s = (sqrt(p *(p -a) *(p -b)*(p -c)));
    printf("dien tich: %.2f", s);
    printf("chu vi: %.2f", 2*p);
}
else { printf("Khong phai tam giac");
     }
return 0;
}

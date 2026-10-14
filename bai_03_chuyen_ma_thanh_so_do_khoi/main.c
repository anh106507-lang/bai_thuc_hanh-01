#include <stdio.h>
#include <math.h>
int main(){
int N, count;
printf("Nhap so nguyen N>0: ");
scanf("%d", &N);
count = 0;
for(int i =2; i<= sqrt(N); i++){
  if(N% i ==0 ) count ++;
}
if(count == 0)
  printf("%d la so nguyen to", N);
else
  printf("%d khong la so nguyen to ", N);
return 0;
)

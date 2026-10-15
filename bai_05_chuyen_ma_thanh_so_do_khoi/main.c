#include < stdio.h>
int main(){
  int a[10], n, index, vt;
scanf("%d", &n);
for(int i =0; i<n; i++){
scanf("%d", &a[i]);
}
index = 0;
vt = 0;
while(index < n && a[index]<0)
{
index ++;
}
vt = index;
for(int j = index +1; j<n; j++){
if(a[j] > 0 && a[j]<a[vt]){
vt = j;
}
}
  printf("%d", vt);
return 0;
}

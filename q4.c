#include <stdio.h>
int main(){
int a[5]={5,3,2,29,23};
int sum= 0;
for(int i=0;i<5;i++){
 sum+=a[i];
}
printf("Sum = %d", sum);
return 0;
}

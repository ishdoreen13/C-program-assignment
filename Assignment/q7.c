#include <stdio.h>
int main(){
int n;
int pro=1;
printf("Enter the number :");
scanf("%d",&n);
int real_n =n;
while(n>=1){
    pro=pro*n;
    n--;
}
printf("%d! =%d",real_n,pro);
return 0;
}

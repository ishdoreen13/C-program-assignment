#include <stdio.h>
int main(){
int a;
printf("Enter the number: ");
scanf("%d",&a);
int x=1;
int pro;
while(x<11){

 pro=a*x;
 printf("%d x %d = %d\n", a, x, pro);
 x++;

}

return 0;
}

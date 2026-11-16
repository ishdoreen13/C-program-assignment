#include <stdio.h>
void small_num(int a[],int n){
 int small=a[0];
for (int i=1;i<n;i++){
    if (a[i]< small){
        small=a[i];
    }
}
printf("The smallest in the array is %d",small);
}
int main(){
int n;
printf("Enter the size the array  :");
scanf("%d",&n);
int a[n];
printf("Enter the number in the array\n");
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
small_num(a, n);
return 0;
}

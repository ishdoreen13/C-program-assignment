#include <stdio.h>
void second_larg(int a[],int n){
     int largest=a[0] ;
     int second=a[0] ;
for(int i=1;i<n;i++){

  if (a[i] > largest){
   second=largest;
   largest=a[i];}

  else if(a[i]<largest && a[i]>second){
     second=a[i];
  }

}
 printf("Second largest =%d",second);
}
int main(){
int n;
printf("Enter the size of the array :");
scanf("%d",&n);
int a[n];
printf("Enter the array element:\n");
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
second_larg(a,n);
return 0;
}

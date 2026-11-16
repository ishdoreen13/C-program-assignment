#include <stdio.h>
int main(){
int a[6]={4,5,6,5,5,6};
int n=a[3];
int rep =1;
for(int i=1;i<6;i++){
    if(a[i]== n){
        rep++;
    }
}
printf("%d has repeated %d times",n,rep);
return 0;
}

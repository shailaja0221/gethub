    
#include<stdio.h>
int main(){
  int n;
  int cnt=0;
  scanf("%d",&n);
  while(n!=0){
   n=n/10;
  cnt ++;
  }
  printf("%d\n",cnt);
  }

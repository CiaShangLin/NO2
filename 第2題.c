#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int function(int n){
	if(n==1 || n==0)
	  return 1;
	else
	  return n*function(n-1);
}

long long int xop(int x,int n){
	if(n==0)
	  return 1;
	else if(n==1)
	  return x;
	else
	  return x*xop(x,n-1);
}

double total(int x,int n){
	if(n==0)
		return 0;
	else if(n==1)
		return x;
	else
		return ((double)xop(x,n)/function(n))+total(x,n-1);
}

int main(int argc, char *argv[]) {

	long long int n,x;
	while(1){
	  printf("請輸入x:");
	  scanf("%lld",&x);
	  printf("請輸入n:");
	  scanf("%lld",&n);
	  printf("%.2lf\n",total(x,n));	
	} 
	
	return 0;
}

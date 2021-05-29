#include<stdio.h>
int fact(int x);
//Let's set a return point.

main(){
	int x=100;
	scanf("%d",&x);
	x=fact(x);
	printf("%d",x);
}

int fact(int x){
	if(x==1) return 1;
	else return x*fact(x-1);//What happens if there is no return in the middle?
}

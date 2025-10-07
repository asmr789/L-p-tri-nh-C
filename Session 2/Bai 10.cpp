#include<stdio.h>
#include<math.h>

int main(){
	
	int a = 10;
	int b = 10; 
	int c = 10;
	int s;
	
	s = (sqrt((a*a)+(b*b)) / (c+1)) 
	+ ((a*b) - c) 
	- sqrt((abs(a-b) + (c*c)));
	
	printf("%d",s);
	
	return 0;
}
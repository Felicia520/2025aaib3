///week02-1.cpp
///c
#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	int b = a; ///backup
	///Bo-Pi Fa
	int ans = 0;
	while(a>0){
		ans = ans*10 + a%10;
		a = a/=10;
	}
	printf("%d+%d=%d\n", b, ans, b+ans);
}

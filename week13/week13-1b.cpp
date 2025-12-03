///week13-1b.cpp
///SOIT107_ADVANCE_004
#include <iostream>
using namespace std;
int gcd(int a, int b){
	if(a==0) return b;
	if(b==0) return a;
	return gcd(b, a%b);
}
int main(){
	cout << "Enter two integers: \n";
	int a, b;
	cin >> a >> b;

	int ans = 1;
	for(int i=1; i<=a; i++){
		if(a%i==0 && b%i==0) ans = i;
	}
	cout <<"The greatest common divisor of "<< a << " and " << b << " is " << ans << "\n";
}

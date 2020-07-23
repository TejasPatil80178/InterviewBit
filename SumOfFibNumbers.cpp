#include <bits/stdc++.h>
using namespace std;

const int mx = 1000;

int f[mx] = {0};

int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1 || n==2){
		f[n] = 1;
		return 1;
	}
	
	if(f[n]){
		return f[n];
	}
	
	if(n%2==0){
		int k = (n/2);
		f[n] = fib(k) * (2*fib(k-1) + fib(k));
	}
	else{
		int k = (n+1)/2;
		f[n] = (fib(k)*fib(k)) + (fib(k-1)*fib(k-1));
	}
	
	return f[n];
	
	
}
int main() {
	int n = 9;
	cout<<fib(n);
	return 0;
}

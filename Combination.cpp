#include <iostream>

using namespace std;

long long bin(int n,int k) {
	if(k == 0 || n == k)
		return 1;
	else {
		if(k == 1) {
			return n;
		}
		else {
			return bin(n-1,k-1) + bin(n-1,k);
		}
		
	}
		
}



int main() {
	
	cout << bin(45,10);
	
	return 0;
}

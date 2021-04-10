#include <iostream>
#include <vector>
using namespace std;


int partition(int inp[], int first, int last) { // partition 함수로 splitpoint를 구하자 
	int con_first = first; //pivot 설정 
	int pivot = inp[con_first];//pivot 설정 
	while (first <= last) {
		while (inp[first] <= pivot && first < last) {
			first++;
		}
		while (inp[last] >= pivot && last >= first) {
			last--;
		}
		if (first < last) {
			int temp = inp[first];
			inp[first] = inp[last];
			inp[last] = temp;
		}
		else
			break;
	}
	int temp = inp[con_first];
	inp[con_first] = inp[last];
	inp[last] = temp;

	return last;
}

void myQuicksort(int inp[],int first,int last) {
	if (first < last) {
		int pivot = inp[first];
		int splitPoint = partition(inp, first, last);
		myQuicksort(inp, first, splitPoint - 1);
		myQuicksort(inp, splitPoint + 1, last);
	}

}




int main() {
	int S[8] = { 15,22,13,27,12,10,20,25 };
	myQuicksort(S, 0, 7);
	for (int i = 0; i < 8; i++) {
		cout << S[i] << endl;
	}


	return 0;
}

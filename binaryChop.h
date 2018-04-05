#ifndef binary_chop_h
#define binary_chop_h
#include <iostream>
#include <stdexcept>
using namespace std;

int binaryChop(int target, int num[], int length) {

	if (num==nullptr||length<=0) 
		throw invalid_argument("Invalid array.");

	int begin=0;
	int end=length-1;
	int middle=(begin+end)>>1;
	
	while ((begin!=end)&&(num[middle]!=target)) {
		if (target>num[middle]) {
			begin=middle+1;
		}
		else {
			end=middle-1;
		}
		middle=(begin+end)>>1;
	}

	if (num[middle]==target) return middle;
	else return -1;
}
#endif

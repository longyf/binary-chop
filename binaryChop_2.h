#ifndef binary_chop_2_h
#define binary_chop_2_h
#include <iostream>
#include <stdexcept>
using namespace std;

int binaryChop(int target, int num[], int *begin, int *end) {

	if ((num==nullptr)||((end-begin)<0))
		throw invalid_argument("Invalid array.");

	int *middle=begin+((end-begin)>>1);

	if (*middle==target) {
		return middle-num;
	}
	else if(begin==end) {
		return -1;
	}
	else {
		if (target>*middle) {
			return binaryChop(target, num, middle+1, end);
		}
		else {
			return binaryChop(target, num, begin, middle-1);
		}
	}
}
#endif

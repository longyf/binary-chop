#include <iostream>
#include "binaryChop.h"

using namespace std;

int main() {
	int array[10]={0,1,2,3,4,5,6,7,8,9};
	int target=-1;

while (target!=11) {
	int temp=binaryChop(target,array,10);

	if (temp!=-1) {
		cout<<"The index of "<<target<<" is: "<<temp<<endl;
	}
	else {
		cout<<"Can not find: "<<target<<endl;
	}
	target++;
}

	return 0;
}

#include <iostream>
#include "binaryChop.h"
#include "binaryChop_2.h"

using namespace std;

int main() {
	int array[10]={0,1,2,3,4,5,6,7,8,9};
	int target=-1;

	cout<<"循环。"<<endl;
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

    cout<<"递归。"<<endl;
	target=-1;
	while (target!=11) {
	    int temp=binaryChop(target,array,&array[0],&array[9]);

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

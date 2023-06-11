#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[10] = {1};
	for(int i=0; i<4; i++){
	    cin>>a[i];
	}

for(int i=0; i<4; i++){
    for(int j=i; j<4; j++){
        for(int k=i; k<=j; k++){
            cout<<" "<<a[k];
        }
        cout<<"\n";
    }
}
	return 0;
}

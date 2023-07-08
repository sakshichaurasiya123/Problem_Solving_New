#include <iostream>
#include<array>
#include <limits.h>
#include <string>
#include <vector>
using namespace std;
int main() {
        string s="CodingBlocks";
        int rotate=3;
        int stringLength=s.size();
        string newString;
        for(int i=(stringLength-rotate); i<stringLength; i++){
            newString +=s[i];
        }
        for(int i=0; i<(stringLength-rotate); i++){
            newString+=s[i];
        }
        cout<<newString<<"\n";
        cout<<stringLength;
        
	return 0;
}

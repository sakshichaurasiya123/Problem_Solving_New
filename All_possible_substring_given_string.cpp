#include <iostream>
#include<array>
#include <limits.h>
#include <string.h>
#include<algorithm>
#include <vector>
using namespace std;
int main() {
    /*First method -> Using strng */
        string s1="abc";
        string subarray;
        for(int i=0; i<s1.size(); i++){
            for(int j=i; j<s1.size(); j++){
            
                /* print the substring from i to j */    
                for(int k=i; k<=j; k++){
                    subarray+=s1[k];
                }
                cout<<subarray<<endl;
                subarray="\0";
            }
        }
        
	return 0;
}

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

//Using Kadane's algorithm
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int cur_sum=0;
        for(int i=0; i<nums.size(); i++){
            cur_sum +=nums.at(i);
            if(cur_sum>max_sum)
                max_sum=cur_sum;
            if(cur_sum<0)
                cur_sum=0;
        }
        return max_sum;
    }

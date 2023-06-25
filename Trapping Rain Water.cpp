#include <iostream>
#include<array>
#include <limits.h>
#include <vector>
using namespace std;
int main() {
        vector<int>height;
        height.push_back(0);
        height.push_back(1);
        height.push_back(0);
        height.push_back(2);
        height.push_back(1);
        height.push_back(0);
        height.push_back(1);
        height.push_back(3);
        height.push_back(2);
        height.push_back(1);
        height.push_back(2);
        height.push_back(1);
        vector<int>left_most(height.size());
        vector<int>right_most(height.size());
        for(int i=0; i<12; i++){
            left_most[i]=0;
            right_most[i]=0;
            // cout<<height[i]<<" ";
        }
        left_most[0] = height[0];
        right_most[height.size()-1] = height[height.size()-1];
        for(int i=1; i<height.size(); i++){
            left_most[i] = max(left_most[i-1], height[i]);
        }
        for(int i=height.size()-2; i>=0; i--){
            right_most[i]=max(right_most[i+1], height[i]);
        }
        int max_water=0;
        int curr_water=0;
        for(int i=0; i<height.size(); i++){
            curr_water = min(left_most[i],right_most[i]) - height[i];
            max_water +=curr_water;
        }
        cout<<"Left most Array = ";
        for(int i=0; i<left_most.size(); i++){
            cout<<left_most[i]<<" ";
        }
        cout<<endl;
        cout<<"Right most Array = ";
        for(int i=0; i<right_most.size(); i++){
            cout<<right_most[i]<<" ";
        }
        cout<<endl;
        
        cout<<"max water = "<<max_water<<endl;
        
        
	return 0;
	
}

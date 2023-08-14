#include <iostream>
#include<array>
using namespace std;

void lower_bound(int arr[], int searchElement, int n){

	/* Lower bound */
     int s=0,e=arr.size()-1;
        int middle,lowerbound=-1;
        while(s<=e){
            middle=((s+e)/2);
            if(target==arr[middle]){
                lowerbound=middle;
                e=middle-1;
            }
            else if(target>arr[middle]){
                s=middle+1;
            }
            else{
                e=middle-1;
            }
        }
	/* Upper bound */
        int s1=0,e1=arr.size()-1;
        int middle1,upperbound=-1;
        while(s1<=e1){
            middle1=((s1+e1)/2);
            if(target==arr[middle1]){
                upperbound=middle1;
                s1=middle1+1;
            }
            else if(target>arr[middle1]){
                s1=middle1+1;
            }
            else{
                e1=middle1-1;
            }
        }
	if(lowerbound!=-1){
        cout<<"Lowerbound found a index = "<<lowerbound<<endl;
	}
	else{
		cout<<"searchElement lowerbound not present in array";
	}
	if(upperbound!=-1){
		cout<<"Upperbound found a index = "<<lowerbound<<endl;  
	}
	else{
    		cout<<"searchElement upperbound not present in array";
	}
    
}

int main() {
    int n,searchElement;
    cin>>n;
    int arr[n];
    cin>>searchElement;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    lower_bound(arr,searchElement,n);
    
    
	return 0;
} 

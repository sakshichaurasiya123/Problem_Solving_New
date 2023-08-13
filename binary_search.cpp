#include <iostream>
#include<array>
using namespace std;

void binary_search(int arr[], int searchElement, int n){
    int s=0,e=n-1;
    int middle;
    while(s<=e){
        middle=((s+e)/2);
        if(searchElement==arr[middle]){
            cout<<"searchElement found at index = "<<middle<<endl;
            return;
        }
        else if(searchElement>arr[middle]){
            s=middle+1;
        }
        else{
            e=middle-1;
        }
    }
    cout<<"searchElement not present in array";
    
}

int main() {
    int n,searchElement;
    cin>>n;
    int arr[n];
    cin>>searchElement;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    binary_search(arr,searchElement,n);
    
    
	return 0;
} 

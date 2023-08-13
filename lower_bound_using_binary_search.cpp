#include <iostream>
#include<array>
using namespace std;

void lower_bound(int arr[], int searchElement, int n){
    int s=0,e=n-1;
    int middle,lowerbound=-1;
    while(s<=e){
        middle=((s+e)/2);
        if(searchElement==arr[middle]){
            lowerbound=middle;
            s=middle-1;
        }
        else if(searchElement>arr[middle]){
            s=middle+1;
        }
        else{
            e=middle-1;
        }
    }
    if(lowerbound!=-1){
        cout<<"Lowerbound found a index = "<<lowerbound<<endl;
        return;
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
    
    lower_bound(arr,searchElement,n);
    
    
	return 0;
} 

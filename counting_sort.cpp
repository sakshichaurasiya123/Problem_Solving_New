#include <iostream>
#include<array>
#include <limits.h>
#include <string.h>
#include<algorithm>
#include <vector>
using namespace std;
void takeArray_UserInput(int arr[], int n){
    for(int i=0; i<n; i++){
            cin>>arr[i];
    }
}

void counting_sort(int arr[], int n){
    // int maxElement = *max_element(arr, sizeof(arr)/sizeof(arr[0]));
    int orgArraySize=sizeof(arr)/sizeof(arr[0]);
    cout<<"original array size = "<<n<<endl;
     int maxElement = *max_element(arr, arr + n);
     int freq[maxElement+1]={0};
     for(int i=0; i<n; i++){
         freq[arr[i]]=freq[arr[i]]+1;
         cout<<" "<<freq[arr[i]]<<endl;
     }
    
    cout<<"Frequency Array = ";
     for(int i=0; i<sizeof(freq)/sizeof(freq[0]); i++){
         cout<<freq[i]<<" ";
     }
     cout<<endl;
     
     int j=0;
     for(int i=0; i<n; ){
         if(freq[j]<=0){
             j++;
             
         }
         else{
             while((freq[j])>0){
                 arr[i++]=j;
                 freq[j]=freq[j-1];
             }
             j++;
         }
     }
     cout<<endl<<"Original array = ";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
     }
     cout<<endl;
     
    
}

void print_array_element(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main() {
    int n;
    cin>>n;
   	int arr[n];
	takeArray_UserInput(arr,n);
    counting_sort(arr,n);
    print_array_element(arr,n);
	return 0;
} 

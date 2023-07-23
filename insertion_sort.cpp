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

void swap(int i,int j,int arr[]){
     int k=arr[i];
     arr[i]=arr[j];
     arr[j]=k;
}

void print_array_element(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void insertion_sort(int arr[], int n){
    int j;
    for(int i=1; i<n; i++){
        int no=arr[i];
        for(j=i-1; j>=0 && arr[j]>no; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=no;
        
    }
}

int main() {
    int n;
    cin>>n;
   	int arr[n];
	takeArray_UserInput(arr,n);
    insertion_sort(arr,n);
    print_array_element(arr,n);
	return 0;
} 

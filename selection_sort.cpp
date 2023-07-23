/*Selection sort will select minimum element from array and will place that element at sorted array part at the starting of array */
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

void selection_sort(int arr[], int n){
    int min;
    for(int i=0; i<n-1; i++){
        min =i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        swap(i,min,arr);
    }
}

int main() {
    int n;
    cin>>n;
   	int arr[n];
	takeArray_UserInput(arr,n);
    selection_sort(arr,n);
    print_array_element(arr,n);
	return 0;
} 

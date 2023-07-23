/* Bubble sort takes o(n^2) time to Sort Array Elements */

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

void bubble_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<(n-i); j++){
            if(arr[j]<arr[j-1]){
                swap(j,j-1,arr);
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
   	int arr[n];
	takeArray_UserInput(arr,n);
    bubble_sort(arr,n);
    print_array_element(arr,n);
	return 0;
} 

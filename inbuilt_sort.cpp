#include <iostream>
#include<array>
#include <limits.h>
#include <string.h>
#include<algorithm> /*This api includes inbuild sort() */
#include <vector>
using namespace std;
void takeArray_UserInput(int arr[], int n){
    for(int i=0; i<n; i++){
            cin>>arr[i];
    }
}

/* Increasing order sorting */
void inbuilt_sort(int arr[],int n){
    sort(arr,arr+n);
}

/*Sort function internally call this myCompare(), whenever we will have to  do comparision of 2 elements*/
bool myCompare(int a,int b){
    return a>b;
}

/* Decreasing order sorting */
void inbuilt_sort_reverse(int arr[],int n){
    
    sort(arr,arr+n, myCompare);
}

int main() {
    int n;
    cin>>n;
   	int arr[n];
	  takeArray_UserInput(arr,n);
	  inbuilt_sort(arr,n);
	  cout<<"Pint increasing order sorting =>"<<endl;
    print_array_element(arr,n);
    inbuilt_sort_reverse(arr,n);
    cout<<"\n Print decreasing order sorting =>"<<endl;
    print_array_element(arr,n);
    
	return 0;
} 

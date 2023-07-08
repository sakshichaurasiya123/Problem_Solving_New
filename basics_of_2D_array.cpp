#include <iostream>
#include<array>
#include <limits.h>
#include <string.h>
#include<algorithm>
#include <vector>
using namespace std;
void readMetric(int arr[10][10], int R,int C){
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cin>>arr[i][j];
        }
    }
}

void waveform(int arr[10][10],int R,int C){
    for(int i=0; i<C; i++){
        if(i%2==0){
            for(int j=0; j<R; j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=(R-1); j>=0; j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}

int main() {
    char a[][3]={{'a','b','c'},{'d','e','f'}};
    cout<<"a[0][0] = "<<a[0][0]<<endl; //it will print value of a[0][0], which is 'a'
    cout<<"a[0] = "<<a[0]<<endl; //it will point to the address of a[0] and pring character till it will not get null value, In this case output will be abcdef followed by some garbage value (It might or might not contains garbase balue, so its better to please give null at the last of string array)
	
	int arr[10][10];
	int R,C;
	cin>>R>>C;
	
	/* Read number of Rows and column in 2D array */
	readMetric(arr,R,C);
	
	/*Print 2D metrics */
	cout<<"Print normal metrics = "<<endl;
	for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
	cout<<"print matrics in waveform"<<endl;
	/*Print the array in Wave form */
	waveform(arr,R,C);
	return 0;
} 

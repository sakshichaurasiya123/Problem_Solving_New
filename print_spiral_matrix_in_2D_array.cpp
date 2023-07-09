#include <iostream>
#include<array>
#include <limits.h>
#include <string.h>
#include<algorithm>
#include <vector>
using namespace std;
void spiralPrint(int arr[][10],int R,int C){
    int startRow=0, endRow=R-1, startColumn=0, endColumn=C-1;
    while(startRow<=endRow && startColumn<=endColumn){
        //print start Rows
        for( int j=startColumn; j<=endColumn; j++){
            cout<< arr[startRow][j]<<" ";
        }
        startRow++;
        
        //print end Columns
        
        for(int i=startRow; i<=endRow; i++){
            cout<<arr[i][endColumn]<<" ";
        }
        endColumn --;
        
        //print end Rows
        if(startRow<endRow){
        for(int i=endColumn; i>=startColumn; i--){
            cout<<arr[endRow][i]<<"  ";
        }
        endRow --;
        }
        
        //print start Columns
        
        for(int i=endRow; i>=startRow; i--){
            cout<<arr[i][startColumn]<<" ";   
        }
        startColumn++;
    }
}
/*Read matrix */
void readMetric(int arr[10][10], int R,int C){
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cin>>arr[i][j];
        }
    }
}


int main (){
	int arr[10][10];
	int R,C;
	cin>>R>>C;
	int number =13;
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
	//Find the number
	cout<<"Search element = "<<endl;
	findElement(arr,R,C,number);
	return 0;
} 

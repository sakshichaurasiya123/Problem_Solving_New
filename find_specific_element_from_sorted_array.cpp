/*Find the specific element which is sorted along Rows and Columns of Array using stairs method  in o(N) time*/
void findElement(int arr[][10], int R, int C, int number){
    int i=0; //for Rows
    int j=C-1;  // for Columns
    while(i<R && j>=0){
        if(arr[i][j]== number){
            cout<<"number found at index R  = "<<i<<" and C = "<<j<<endl;
            return;
        }
        else if (arr[i][j]<number){
            i++;        
        }
        else{
            j--;
        }
    }
    cout<<"number doeas not found in array"<<endl;
    return;
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

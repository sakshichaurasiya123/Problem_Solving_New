#include <iostream>
#include<array>
#include<algorithm>
using namespace std;

/*Sort pair of elements */
bool myCompare(pair<string,int>p1, pair<string,int>p2){
    if(p1.second ==p2.second){
        return p1.first<p2.first;
    }
    else{
        return p1.second>p2.second;
    }
}

int main() {
    int minSalary;
    cin>>minSalary;
    int n;
    cin>>n;
    pair<string,int> employee[n];
    string name;
    int salary;
    
    for(int i=0; i<n; i++){
        cin>>name>>salary;
        employee[i].first=name;
        employee[i].second=salary;
    }
    
    sort(employee, employee+n, myCompare);
    for(int i=0; i<n; i++){
        if(employee[i].second>minSalary){
            cout<<"Name = "<<employee[i].first<<"  "<<"Salary = "<<employee[i].second<<endl;
        }
    }
    
    
    
	return 0;
} 

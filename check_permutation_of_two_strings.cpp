#include <iostream>
#include<array>
#include <limits.h>
#include <string.h>
#include<algorithm>
#include <vector>
using namespace std;
int main() {
        string s1="naksuM";
        string s2="Muskan";
        int l1=s1.size();
        int l2=s2.size();
        /*First methode using frequency */
      /*
        int freq[26]={0};
        for(int i=0; i<l1; i++){
            freq[s1[i]-'a']++;
        }
        for(int i=0; i<l2; i++){
            if(freq[i]>0){
                freq[s2[i]-'a']--;
            }
        }
        
        if(l1 != l2){
            cout<<"string are not permutation of each other because length of string's are not same"<<endl;
        }
        else{
            int i;
            for(i=0; i<26; i++){
                if(freq[i]!=0)
                {
                    cout<<"String is not a permutation"<<endl;
                    break;
                }
            }
            if(i == 26){
                cout<<"String is a permutation of each other"<<endl;
            }
        }
        */
        /* Second method using sort function*/
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        cout<<"s1 = "<<s1<<endl;
        cout<<"s2 = "<<s2<<endl;
        if((s1.compare(s2))==0){
            cout<<"Strings are permutation of each other";
        }
        
        
        
        
        
	return 0;
}

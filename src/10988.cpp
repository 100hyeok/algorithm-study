#include<bits/stdc++.h>
#include<string.h>


using namespace std;

string str;
string temp;

int main(){
    cin >> str;
    temp = str;
    reverse(str.begin(),str.end());
    
    if(str == temp)
    
    	cout << 1;
    
    else
        
    	cout << 0;
    
    	return 0;
    	
    

}
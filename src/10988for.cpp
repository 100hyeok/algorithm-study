#include<bits/stdc++.h>
#include<string.h>


using namespace std;

string str;
string temp;
int cnt = 0;
int i = 0;

int main(){
    cin >> str;
    
    // reverse(str.begin(),str.end());
    while(str[i++]>0)
        cnt++;

    for(i < cnt , i++;){
        temp = str[i];
        str[i] = str[cnt - i - 1];
        str[cnt - i - 1] = temp;
}
    if(str == temp)
    {   
    	cout << 1;
    }
    else
    {   
    	cout << 0;
    
    	return 0;
    }	
    

}
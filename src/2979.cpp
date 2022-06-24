/*
 * beakjoon 2979 / 시간 / 어디서부터 ~ 까지 배열 
 */

#include<bits/stdc++.h>

using namespace std;

int A, B, C, a, b;
int result = 0;
int cnt[101];

int main(){
    cin >> A >> B >> C;

    for(int i=0; i<3; i++){
        cin >> a >> b;
        for(int j=a; j<b; j++){
            cnt[j]++;
        }
    }
    //요금 계산 
    for(k=0; k<101; k++){
        if(cnt[k]){
            if(cnt[k] == 1) {
                result = result + ( A * cnt[k] );
            } else if (cnt[k] == 2){
                result = result + ( B * cnt[k] );
            } else if (cnt[k] == 3){
                result = result + ( C * cnt[k] );
            }
        }
    }
    cout << result;

    return 0;
}
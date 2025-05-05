#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, b, d;
    cin >> n >> b >> d;

    int count = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
        int orange;
        cin >> orange;

        if(orange <= b){
            sum += orange;
            if(sum > d){
                count++;
                sum = 0;
            }
        }
    }

    cout << count << '\n';
    return 0;
}


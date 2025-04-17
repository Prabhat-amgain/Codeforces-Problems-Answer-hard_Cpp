#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());
    int total = accumulate(arr.begin(), arr.end(), 0);
    int get = 0, count = 0;

    for(int i = 0; i < n; i++){
        get += arr[i];
        count++;
        if(get > total - get){
            cout << count << endl;
            break;
        }
    }
}


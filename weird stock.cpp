#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int res = 0;
    while(n < m){
        m = m & 1 ? m + 1 : m / 2;
        res++;
    }
    cout << res + (n - m) << endl;
    return 0;
}

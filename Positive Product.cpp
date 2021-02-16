#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp;
    int fullProduct = 1, productTillFirst = 1;
    bool found = false;
    int oddCount = 0;
    int firstNeg = 1;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp < 0 && !found){
            firstNeg = temp;
            found = true;
            productTillFirst = fullProduct;
        }
        oddCount ^= (temp < 0);
        fullProduct *= abs(temp);
    }
    if(oddCount){
        int productAfterFirst = fullProduct / (abs(firstNeg) * productTillFirst);
        cout << max(productTillFirst, productAfterFirst) << endl;
    }
    else{
        cout << fullProduct << endl;
    }
}

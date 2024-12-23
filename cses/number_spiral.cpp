#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long long i;
    long long j;
    cin >> i >> j; 
    long long mx = max(i,j);
    bool left = i>j;
    long long ans;
    long long diff = abs(i-j); 
    if(left) {
        if(i%2==0) {
            ans = i*i - (i-1) + diff;
        } else {
            ans = i*i - (i-1) -diff; 
        }
    } else {
        if(j%2==0) {
            ans = j*j - (j-1) - diff;
        } else {
            ans = j*j - (j-1) + diff; 
        }
    }

    if(i==j) {
        ans = i*i - (i-1); 
    }
    cout << ans << endl; 
}
int main() {
    /*
    number_spiral
    */
    int t;
    cin >> t;
    while(t--){
        solve(); 
    }
    return 0;
}

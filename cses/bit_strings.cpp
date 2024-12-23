#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    Bit strings 
    */
    long long MOD = 1e9 + 7;
    long long n;
    cin >> n;
    long long ans=1; 
    vector<long long> dp(64,0);
    dp[0] = 2;
    long long one  = 1; 
    // using 32 states we can make every number.  
    for(int i=0; i<64; ++i) {
        dp[i+1] = ((dp[i]%MOD)*(dp[i]%MOD))%MOD; 
        if(n&(one<<i)) {
            ans=((ans%MOD)*(dp[i]%MOD))%MOD;
        }
    }
    cout << ans; 
    return 0;
}
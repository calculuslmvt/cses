#include <iostream> 
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    // missing number here 1 - n;
    long long sum = 0; 
    for(int i=0; i<n-1; ++i) {
        int temp;
        cin >> temp;
        sum+=temp; 
    }
    cout << n*(n+1)/2 - sum;
return 0; 
}

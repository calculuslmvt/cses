#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int last_ele;
    cin >> last_ele; 

    long long ans=0; 
    for(int i=1; i<n; ++i) {
        int curr_ele;
        cin >> curr_ele;
        if(curr_ele >=last_ele){
            last_ele = curr_ele;
        } else {
            ans+=last_ele-curr_ele;
        }
    }
    cout << ans; 
    return 0;
}
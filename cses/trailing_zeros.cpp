#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    Trailing zeros: 
    */
    int64_t num, num2;
    cin >> num;
    int count=0;

    for(int i=0; i<=num; i+=5) {
        int curr_num = i; 
        while(curr_num/5 > 0 && curr_num%5==0) {
            //cout << i << " "; 
            count++; 
            curr_num/=5; 
        }
    } 
    cout << count; 
    return 0;
}
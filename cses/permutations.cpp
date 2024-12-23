#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    Permutations 
    1 2 3 4 5 
    3 4 1 2 1
    4 5 5 1 2
    5       3
    13 11 9 7 4 2 5 1 3 6 8 10 12
    diff is more than 1, 
    why there exists such a combination ? 
    constrains - 10^6 : O(n)
    bruteforce - O(n!)
    */
    //cout << "hello world"; 
    int n; 
    cin >> n;
    vector<int> left;
    vector<int> right; 
    vector<int> mid;
    mid.push_back(4);
    mid.push_back(2);
    mid.push_back(5);
    mid.push_back(1);
    mid.push_back(3);
    if(n==5) {
        for(int x : mid) {
            cout << x << " "; 
        }
        return 0; 
    } else if (n==4) {
        cout << "2 4 1 3";
        return 0;
    } else if (n==1) {
        cout << n; 
        return 0;  
    }
        if (n<5) {
        cout << "NO SOLUTION";
        return 0; 
    }
    int i = n;
    int ln = n;
    int rn = 6;
    if(i%2 == 0) {
        i-=1;
        ln=n-1; 
    }
    i-=5;
    i/=2;
 
    while(i--) {
        left.push_back(ln);
        ln-=2; 
        right.push_back(rn);
        rn+=2; 
    }

    for(int x : left) {
        cout << x << " "; 
    }
    for(int x : mid) {
        cout << x << " ";
    }
    for(int x : right) {
        cout << x << " "; 
    }
    if(n%2 == 0)cout<< n;
    return 0;
}
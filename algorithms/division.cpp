//kattis problem: https://open.kattis.com/problems/candydivision

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    set<long long> v;
    long long in;
    cin >> in;
    for (long long i = 1; i<=sqrt(in)+1; ++i) {
            //if (p % i == 0) d += i;
        if (in%i==0) {
            // If divisors are equal, print only one
            if (in/i != i){
                v.insert(i-1);
                v.insert(in/i-1);
            }
            else v.insert(i-1);


        }
    }
    for (set<long long>::iterator it=v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

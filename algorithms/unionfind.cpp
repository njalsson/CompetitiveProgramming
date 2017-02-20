//kattis project https://open.kattis.com/problems/unionfind

#include <bits/stdc++.h>
#define rep(i,a,b) for(int i= (a); i < (b); i++);
using namespace std;

struct union_find {
    vector<int> p;
    union_find(int n) : p(n){
        for (int i = 0; i < n; ++i) p[i] = i;
    }
    int find(int x) {
        if (p[x] == x) return x;
        int k = find(p[x]);
        p[x]= k;
        return k;
    }
    void unite(int a,int b){
        p[find(a)] = find(b);
    }


};

int main(int argc, char const *argv[])
    {
        cin.sync_with_stdio(false);
        int n, q, a, b; cin >> n >> q;
        char prompt;
        union_find findino(n);
        for(int i = 0; i < q ; i++){
            cin >> prompt >> a >> b;
            if (prompt == '=') findino.unite(a,b);
            if (prompt == '?') {
                if (findino.find(a) != findino.find(b)) {
                    cout << "no" << endl;
                } else {
                    cout << "yes" << endl;
                }
            }
        }
        return 0;
    }

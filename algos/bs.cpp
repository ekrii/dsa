#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> v, int k) { 
    int l = - 1;
    int r = v.size() - 1;

    while(r - l > 1) { 
        int m = l + (l - 1) / 2;
        if(k < v[m]) { 
            r = m;
        }
        else { 
            l = m;
        }
    }
    return k;
}

// this random comment
//fdsfds



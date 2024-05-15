#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
        int maxEle = *s.rbegin();

        set<int> s2;
        for (int i = 0; i <= maxEle; i++) {
            s2.insert(i);
        }
        auto it = s2.begin();
        for (auto x : s) {
            if (*it == x) {
                it++;
            }
        }
        if (it == s2.end()) {
            cout << "0" << endl;
        } else {
            cout << *it << endl;
        }
    }

    return 0;
}

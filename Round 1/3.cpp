#include <iostream>

using namespace std;

int main() {
    int T;

    cin >> T;

    for (int i = 1; i <= T; i++) {
        unsigned long long ans = 0;

        bool check = false;

        string s;

        cin >> s;

        for (int j = 0; j < s.length(); j++) {
            int c = s[j] - '0';

            if (c > 2)
                check = true;

            if (check)
                ans = (ans * 3 + 2) % 1000000007;
            else
                ans = (ans * 3 + c) % 1000000007;
        }

        cout << "Case #" << i << endl;
        cout << ans << endl;
    }

}

/*
0 1 2




108 / 3 = 36
*/
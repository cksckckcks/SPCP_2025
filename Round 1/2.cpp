#include <iostream>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;

    cin >> T;


    for (int i = 1; i <= T; i++) {
        long long ans = 0, N, L;

        cin >> N >> L;

        long long left = 0, right = 0, tmp = 0;

        for (int j = 0; j < N; j++) {
            int n;

            cin >> n;

            if (j == 0) {
                left += n * 2;
                right += L;
            }
            else {
                if (left + n * 2 < right + L)
                    tmp = left + n * 2;
                else
                    tmp = right + L;

                    
                if (right + (L - n) * 2 < left + L)
                    right += (L - n) * 2;
                else
                    right = left + L;

                left = tmp;
            }


            // cout << "left : " << left << endl;
            // cout << "right : " << right << endl;
        }

        
        
        ans = left > right ? right : left;




        cout << "Case #" << i << endl;
        cout << ans << endl;
    }
}
#include <iostream>

using namespace std;

int sell[100001];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;

    cin >> T;

    for (int i = 1; i <= T; i++) {
        int N;

        int money[2] = {0, 0};
        int cnt = 0;

        cin >> N;

        for (int i = 0; i < N; i++)
            cin >> sell[i];

        for (int i = 0; i < N; i++) {
            if (sell[i] == 500) {
                cnt++;
                money[0]++;
            }
            else if (sell[i] == 1000) {
                if (money[0] > 0) {
                    cnt++;

                    money[0]--;
                    money[1]++;
                }
                else {
                    break;
                }
            }
            else if (sell[i] == 5000) {
                if (money[0] == 0 || money[0] * 500 + money[1] * 1000 < 4500)
                    break;
                
                if (money[1] >= 4) {
                    cnt++;

                    money[0]--;
                    money[1] -= 4;
                }
                else {
                    cnt++;

                    int m = 4500 - 1000 * money[1];

                    money[1] = 0;
                    money[0] -= m / 500;
                }
            }
        }

      

        cout << "Case #" << i << endl;
        cout << cnt << endl;
    }


}
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	
	for(test_case = 0; test_case < T; test_case++)
	{
	    int N;
	    vector<int> v;
	    int ans = 0;
	    
	    cin >> N;
	    
	    for (int i = 0; i < N; i++) {
	        int n;
	        
	        cin >> n;
	        
	        v.push_back(n);
	    }
	    
	    for (int i = 0; i < N; i++) {
	        if (v[i] == 0) {
                int dis = 200001;
                int idx = -1;

	            for (int j = 0; j < N; j++) {
                    if (i == j) continue;

	                if (v[j] >= 2) {
                        int check = abs(j - i);

                        if (check < dis) {
                            dis = check;
                            idx = j;
                        }
	                }
	            }

                ans += dis;
                v[idx]--;
                v[i]++;
	        }
	        else if (v[i] > 2) {
                int dis = 200001;
                int idx = -1;

	            for (int j = 0; j < N; j++) {
                    if (i == j) continue;

	                if (v[j] < 2) {
	                    int check = abs(j - i);

                        if (check < dis) {
                            dis = check;
                            idx = j;
                        }
	                }
	            }

                ans += dis;
                v[idx]++;
                v[i]--;
	        }
	    }
		
		
		
		cout << "Case #" << test_case + 1 << endl;
		cout << ans << endl;
	}

	return 0;
}
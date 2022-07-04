#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;cin >> T;
	for(int case_num=1;case_num<=T; case_num++){
		string I, P;
		cin >> I;
		cin >> P;
		int p1 = 0, p2 = 0;
		int ans = 0;
		while(p1<I.size() && p2<P.size()){
			if(I[p1] == P[p2]){
				p1++;
				p2++;
			}else{
				p2++;
				ans++;
			}
		}
		if(p1 != I.size()){
			cout << "Case #" << case_num << ": " << "IMPOSSIBLE" << endl;
		}else{
			ans += P.size() - p2;
			cout << "Case #" << case_num << ": " << ans << endl;
		}
    }
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(){

	int T;
	cin >> T;

	for (int case_num = 1; case_num <= T; case_num++){
		int N, K;
		string S;
		cin >> N;
		cin >> K;
		cin >> S;
		int count_num = 0;
		for (int i=0; i < N/2; i++){
			count_num += (S[i] != S[N-i-1]);
		}
		cout << "Case #" << case_num << ": " << abs(count_num - K) << endl;
	}

	return 0;
}

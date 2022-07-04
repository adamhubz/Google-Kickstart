#include <iostream>

using namespace std;

int main(){

	int T;
	cin >> T;

	for (int case_num = 1; case_num <= T; case_num++){
		int N, M, C;
		cin >> N;
		cin >> M;
		int count_candy = 0;
		for (int i=0; i < N; i++){
			cin >> C;
			count_candy += C;
		}
		cout << "Case #" << case_num << ": " << (count_candy%M) << endl;
	}

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	long long T;cin >> T;
	for(long long case_num=1;case_num<=T; case_num++){
		long long count = 0;
		long long a, b;
		cin >> a >> b;
			for(long long i=a; i<=b;i++){
				long long num = i;
				long long m;
				long long sum = 0;
				long long product = 1;
				while(num > 0){    
					m=num%10;    
					sum += m;
					num=num/10;    
				}
				num = i;
				while(num > 0){    
					m=num%10;    
					product *= m;
				    if(product%sum==0){
					    count++;
					    break;
				    }
					num=num/10;    
				}

			}
		cout << "Case #" << case_num << ": " << count << endl;
	}
	return 0;
}
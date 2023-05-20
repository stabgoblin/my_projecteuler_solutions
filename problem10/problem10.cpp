#include "../tools.hpp"
#include <vector>
#include <cmath>
//derived and improved on my solution of problem7
int main(){
	int p=3,flag=0;//size;
	unsigned long long sum=0;
	vector<int> primes;
	primes.push_back(2);
	while(p<2000000){
		for(auto x:primes){
			if(x>sqrt(p)){
				break;
			}
			if(remainder(p,x)==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			primes.push_back(p);
		}
		flag=0;
		p++;
	}
	for(auto o:primes){
		sum+=o;
		cout<<o<<endl;
	}
	cout<<sum<<endl;
	return 0;
}

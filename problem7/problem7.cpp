#include "../tools.hpp"
#include <vector>
#include <cmath>
//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?

int main(){
	int p=3,flag=0;//size;
	vector<int> primes;
	primes.push_back(2);
//	cout<<"Enter the position of the prime = ";
//	cin>>size;
	while(primes.size()<10001){//size){
		for(auto x:primes){
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
//	for(i=0;i<primes.size();i++)
//	cout<<i+1<<"\tprime\t= "<<primes.at(i)<<endl;
	cout<<"The "<<primes.size()<<" th prime is "<<primes.back();
	return 0;
}

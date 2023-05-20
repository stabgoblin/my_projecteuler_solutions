#include "../tools.hpp"
#include <cmath>
#include <vector>
//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


int main(){
	vector<int> numbers={2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int flag = 0,c=11;
	while(1){
		for(auto i:numbers){
			if(remainder(c,i)!=0){
				break;
			}
			else{
				flag++;
			}
		}
		if(flag == numbers.size()){
			break;
		}
		flag=0;
		c++;
	}
	cout<<c<<"\t"<<flag<<endl;
	return 0;
}

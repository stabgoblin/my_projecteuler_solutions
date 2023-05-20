#include "../tools.hpp"
//problem9
//objective : find a*b*c such that a^2 + b^2 = c^2
//and a+b+c =1000 , by putting value of c from eq 1 in eq 2
// we have just to find a(a+1) +b(b+1) == 1000 
int main(){
	flag = 0;
	for(i=0;i<1000;i++)
	if((i*(i+1))>1000)
	break;
	i--;   	// here i is the upper limit for a and b
	for(j=1;j<=1000;j++){
		for(k=1;k<1000;k++){
			if(k*(k+1)+j*(j+1)<=1000)
			cout<<k*(k+1)+j*(j+1)<<endl;
			}
		if(flag==1)
		break;
		
		flag=0;
	}		
	return 0;
}

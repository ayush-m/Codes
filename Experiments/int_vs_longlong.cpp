/*
Here I am comparing speed in case of {long long int} and {int}. And what I observed is that int computes faster than long long int
*/
#include <iostream>
#include <ctime>
using namespace std;


int main(int argc, char const *argv[])
{
	// long long  int ans=1;
	int ans=1;
	int start_s=clock();
	for(int i=0; i<1300000000; i++){
		ans=ans*352;
		if(ans>1000000000){
			ans=1;
		}
	}
	int stop_s=clock();
	cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}
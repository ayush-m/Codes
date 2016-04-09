#include <bits/stdc++.h>
#include <ctime>
using namespace std;


int main(){
	srand(time(NULL));
	int n=2500, i, tam=11235;
	for(i=0; i<n; i++){
		cout << rand()%tam << endl;
	}
	return 0;
}

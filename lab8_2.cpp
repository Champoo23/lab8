#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

void printO(int N,int M){
	if(N && M > 0){
		for(int x = 0;x < N;x++){
			for(int y = 0;y < M;y++){
				cout << 'O';
			}
			cout << endl;
		}
	}else{
		cout << "Invalid input";
	}
		
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}

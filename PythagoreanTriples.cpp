#include <iostream>
#include <math.h>
using namespace std;
int main(){
	cout << "Pythagorean Triples" << endl;
	cout<<"Side1\tSide2\tHypotenuse"<<endl;
	for(int i = 1; i < 500; i++){
		for(int j = 1; j < 500; j++){
			for(int k = 1; k < 500; k++){
				if(pow(i,2) + pow(j,2) == pow(k,2) && pow(k,2) <= 500){
					cout << i << "\t" << j  << "\t"  << k << endl;

				}
			}
		}	
	}	
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int a = 0;
	cin >> a;
	for(int i = 0; i < a; i++){
		int amount = 0;
		cin >> amount;
		int *p_arr = new int[amount];
		for (int i = 0; i < amount; i++) {
			cout << "print" << endl;
			cin >> p_arr[i];
		}
		for (int i = 0; i < amount; i++) {
			cout << p_arr[i];
		}
		int musamount = 0;
		cin >> musamount;
		int *p_mus = new int[musamount];
		for (int i = 0; i < musamount; i++) {
			cout << "print" << endl;
			cin >> p_mus[i];
		}
		for (int i = 0; i < musamount; i++) {
			cout << p_mus[i];
		}
	}
}

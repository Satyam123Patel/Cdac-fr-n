#include <iostream>
using namespace std;

void hanoi(int n, string from, string to, string via);

int main(){
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    hanoi(n, "A", "C", "B");
    return 0;
}

void hanoi(int n, string from, string to, string via) {
	if(n == 1){
		cout << "Move disk "<< n << " from "<< from << " to " << to << "\n";
	}
	else{
		hanoi(n-1, from, via, to);
		cout << "Move disk " << n << " from " << from << " to " << to << "\n";
		hanoi(n-1, via, to, from);
	}
}


#include<iostream>
using namespace std;

int countdigit(int num);

int main(){
    int num;
    cout<< "Enter a Number: ";
    cin>> num;

    int totalnum = countdigit(num);
    cout<< totalnum;
    return 0;
}
int countdigit(int num){
        int count=0;
        if(num == 0)
        return 1;

        while(num!=0){
            num=num/10;
            count++;
        }
        return count;
        
    }

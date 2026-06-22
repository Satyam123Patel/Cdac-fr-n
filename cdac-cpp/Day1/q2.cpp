#include <iostream>

int main(){
    int n;
    std:: cout<< "Enter the natural number: ";
    std:: cin >> n;
    if(n<=0)
    {
        std:: cout << "It is not valid number";
        return 1;
    }
    int sum = 0;
    int i=1;
    while(i<=n){
        sum =sum +i;
        i++;
    } 
    std:: cout<<sum;
    
}

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    
    string s1 = "Yadnyesh";
    string s12 = "Yadnyesh";
    string s2 = "Kolte";

    string s3 = s1 + " - "+ s2;
    cout << s3 << endl;
    cout << s3.length() << endl;
    cout << s2.find("Kolte") << endl;
    cout << s1.substr(0,5) << endl;
    cout << s3[4] << endl;

    if(s1 == s12){
        cout << "They are same" << endl;
    }
    else{
        cout << "They are not same" << endl;
    }

    char str1[20] = "yadnyeshkolte";
    char str2[20]; 

    strcpy(str2, str1);
    cout << "Copied: " << str2 << endl;

    strcat(str2, " Test");
    cout << "Concated: " << str2 << endl; 

    cout << "Length is: " << strlen(str2) << endl;


    if(strcmp(str1, str2) == 0){
        cout << "They are same" << endl;
    }
    else{
        cout << "They are not same" << endl;
    }

    char str3[20];
    strcpy(str3, str1);

    if(strcmp(str3, str1) == 0){
        cout << "They are same!" << endl;
    }
    else{
        cout << "They are not same " << endl;

    }
        
    
    return 0;

}
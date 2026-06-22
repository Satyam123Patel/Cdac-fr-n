#include <iostream>
#include <cstring>
#define MAX_LEN 50

using namespace std;

class Appliance {
private:
    int applianceID;
    string brand;
    float price;
    char connectivitytype[MAX_LEN];
    int warranty;

public:
    Appliance();
    void getData();
    void displayData();
    void displaywithWarranty(int war);
};


Appliance::Appliance() {
    applianceID = 0;
    brand = "";
    price = 0.0;
    strcpy(connectivitytype, "");
    warranty = 0;
}

void Appliance::getData() {
    cout << "\nEnter Appliance ID: ";
    cin >> applianceID;
    cin.ignore();
    
    cout << "Enter Brand: ";
    getline(cin, brand);
    
    cout << "Enter Price: ";
    cin >> price;
    cin.ignore();
    
    cout << "Enter Connectivity Type: ";
    cin.getline(connectivitytype, MAX_LEN);
    
    cout << "Enter Warranty (years): ";
    cin >> warranty;
}

void Appliance::displayData() {
    cout << "\n---------------------------------";
    cout << "\nAppliance ID: " << applianceID;
    cout << "\nBrand: " << brand;
    cout << "\nPrice: $" << price;
    cout << "\nConnectivity Type: " << connectivitytype;
    cout << "\nWarranty: " << warranty << " years";
    cout << "\n---------------------------------\n";
}

void Appliance::displaywithWarranty(int war) {
    if (warranty == war) {
        displayData();
    }
}

int main() {
    int n;
    
    cout << "How many appliances? ";
    cin >> n;
    
    Appliance app[10]; // Simple fixed array
    
    // Get data
    for (int i = 0; i < n; i++) {
        cout << "\n--- Appliance " << (i + 1) << " ---";
        app[i].getData();
    }
    
    // Display all
    cout << "\n\n===== ALL APPLIANCES =====";
    for (int i = 0; i < n; i++) {
        app[i].displayData();
    }
    
    // Search by warranty
    int searchWarranty;
    cout << "\n\nEnter warranty to search: ";
    cin >> searchWarranty;
    cout << "\n===== APPLIANCES WITH " << searchWarranty << " YEAR WARRANTY =====";
    for (int i = 0; i < n; i++) {
        app[i].displaywithWarranty(searchWarranty);
    }
    
    return 0;
}
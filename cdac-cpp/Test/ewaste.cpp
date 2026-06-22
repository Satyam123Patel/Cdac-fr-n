#include <iostream>
#include <string>
using namespace std;

class ElectronicItem {
private:
    string itemName;
    int weight;
    string originCity;
public:
    ElectronicItem(){
        itemName = "unknown";
        weight = 0;
        originCity = "unknown";
    }

    ElectronicItem(string i, int w, string o){
        itemName = i;
        weight = w;
        originCity = o;
    }

    virtual void displayElectronics(){
        cout << "Item name: " << itemName << endl;
        cout << "weight: " << weight << endl;
        cout << "Origin city" << originCity << endl;
    }
    virtual ~ElectronicItem(){
        cout << "Electonics Constructor destroyed" << endl;
    }
};

class HomeAppliance: public ElectronicItem{
private:
    float powerRating;
    float recyclablePlasticPercent;

public:
    HomeAppliance(): ElectronicItem(){
        powerRating = 0.0;
        recyclablePlasticPercent = 0.0;
    }

    HomeAppliance(string i, int w, string o, float p, float r): ElectronicItem(i, w, o){
        powerRating = p;
        recyclablePlasticPercent = r;
    }
    
    void displayHome(){
        displayElectronics();
        cout << "Power Rating: " << powerRating << endl;
        cout << "Recyclable Plastic Percent: " << recyclablePlasticPercent << endl;
    }

    ~HomeAppliance(){
        cout << "Home Appliance Constructor destructed" << endl;
    }

};

class MobileDevice: public ElectronicItem{
private:
    float batteryCapacity;
    bool hasScreenCrack;
public:
    MobileDevice(): ElectronicItem(){
        batteryCapacity = 0.0;
        hasScreenCrack = false;
    }

    MobileDevice(string i, int w, string o, float b, bool h): ElectronicItem(i, w, o){
        batteryCapacity = b;
        hasScreenCrack = h;
    }

    void displayMobile(){
        displayElectronics();
        cout << "Battery Capacity: " << batteryCapacity << endl;
        cout << "Screen Crack: " << hasScreenCrack << endl;
    }

    ~MobileDevice(){
        cout << "Mobile Device Destructor is destructed" << endl;
    }
};



int main(){
    int n = 6;
    ElectronicItem* arr[6];

    arr[0] = new HomeAppliance("Washing Machine", 5000, "Mumbai", 2000.5, 75.5);
    arr[1] = new HomeAppliance("Refrigerator", 6000, "Delhi", 1500.0, 80.0);
    arr[2] = new HomeAppliance("Microwave", 1500, "Bangalore", 1200.0, 65.0);
    
    // Create some MobileDevice objects
    arr[3] = new MobileDevice("iPhone 14", 200, "China", 3500.0, false);
    arr[4] = new MobileDevice("Samsung S23", 180, "Korea", 4000.0, true);
    arr[5] = new MobileDevice("OnePlus 11", 190, "China", 2800.0, false);

    cout << "Diplaying all the things: " << endl;

    for(int i=0;i<n;i++){
        cout << "Item " << (i+1) << " is: ";
        HomeAppliance* ha = dynamic_cast<HomeAppliance*>(arr[i]);
        MobileDevice* da = dynamic_cast<MobileDevice*>(arr[i]);

        if(ha!=nullptr){
            ha->displayHome();
        }
        else if(da!=nullptr){
            da->displayMobile();
        }
    }

    return 0;
}
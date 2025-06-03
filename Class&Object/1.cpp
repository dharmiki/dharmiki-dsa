#include <iostream>
using namespace std;

class IceCream {
private:
    string flavor;
    string brand;
    int price;
    int calories;
    bool isSugarFree;

public:
    void setValue(string flavor, string brand, float price, int calories, bool isSugarFree) {
        this->flavor = flavor;
        this->brand = brand;
        this->price = price;
        this->calories = calories;
        this->isSugarFree = isSugarFree;
    }
    void getValue() {
        cout << "Ice Cream Flavor: " << this->flavor << endl;
        cout << "Brand: " << this->brand << endl;
        cout << "Price:" << this->price << endl;
        cout << "Calories: " << this->calories << "kcal" << endl;
        cout << "Sugar Free: " << (this->isSugarFree ? "Yes" : "No") << endl;
        cout << "----------------------------------------------------" << endl;
    }
};

int main() {
    
    IceCream vanilla, chocolate, strawberry, butterscoch,rasberry;

    vanilla.setValue("Vanilla", "Havmor",20, 270, false);
    chocolate.setValue("Chocolate","Amul",45, 290, false);
    strawberry.setValue("Strawberry", "Baskin Robbins",200, 250, false);
    butterscoch.setValue("ButterScoch", "Natural",150, 280, false);
    rasberry.setValue("Mango Sorbet", "Anmol",20, 200, true);

    vanilla.getValue();
    chocolate.getValue();
    strawberry.getValue();
    butterscoch.getValue();
    rasberry.getValue();


}





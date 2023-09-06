#include<iostream>
#include<string>
using namespace std;

class Medicine
{
private:
    string name;
    string genericName;
    float discountPercent;
    float unitPrice;
    float prev;
    int number_of_items;

public:
    Medicine()
    {

    }
    Medicine(string nm,string gn,int up=0):name(nm),genericName(gn),unitPrice(up),prev(up)
    {

    }

    double updatedPrice(int percent=5)
    {
        if(percent>=0 && percent<=45)
        {
            discountPercent=percent;
            unitPrice=unitPrice-(unitPrice*percent)/100;
            return unitPrice;
        }

    }

    double getSellingPrice(int nos)
    {
        return  prev*nos;//without discount
    }



    double readjustedPrice(int sell_quantity ,float percent)
    {
        unitPrice=unitPrice-(unitPrice*percent)/100;
        unitPrice=sell_quantity*(prev-unitPrice)/(number_of_items-sell_quantity);
        number_of_items=number_of_items-sell_quantity;
        return unitPrice;

    }
    void resetPrice()
    {
       unitPrice=prev;
    }
    ~Medicine()
    {
        cout<<"NAME "<<name<<endl;
        cout<<"Generic Name "<<genericName<<endl;
        cout<<"Unit Price "<<unitPrice<<endl;
        cout<<"Number of items "<<number_of_items<<endl;
    }






};
int main() {
    // Create three objects of the Medicine class
    Medicine medicine1("Medicine1", "Generic1", 100);
    Medicine medicine2("Medicine2", "Generic2", 200);
    Medicine medicine3("Medicine3", "Generic3", 300);


    medicine1.updatedPrice(10); // Apply a 10% discount


    double sellingPrice1 = medicine1.getSellingPrice(5); // Sell 5 items
    cout << "Selling Price for Medicine1 (5 items): $" << sellingPrice1 << endl;

    // Use the readjustedPrice function to adjust the price of medicine2
    double adjustedPrice2 = medicine2.readjustedPrice(3, 20); // Adjust price for selling 3 items with a 20% discount
    cout << "Adjusted Price for Medicine2 after selling 3 items with 20% discount: $" << adjustedPrice2 << endl;

    // Reset the price of medicine2 to its previous value
    medicine2.resetPrice();



    return 0;
}


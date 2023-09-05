#include<iostream>
#include<string>
using namespace std;

class Product
{
private:
    string name;
    int id;
    float price;
    int quantity;
    int max_quantity;
    bool availableStatus;
    float prev;
    static int total;

public:
    Product()
    {

    }
    Product(string nam, int id_p,float p=0,int q=0 ):name(nam),id(id_p),price(p),quantity(q)
    {

    }
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    float getPrice()
    {
        return price;
    }
    int getQuantity()
    {
        return quantity;
    }
    bool getAvailbilityStatus()
    {
        if(quantity>0)
        {
            availableStatus=true;
        }
        else
        {
            availableStatus=false;
        }
        return availableStatus;
    }
    void setName(string nam)
    {
        name=nam;
    }
    void  setId(int i)
    {
        id=i;
    }
    void setPrice(float p)
    {
        price=p;
    }
    void setQuantity(int q)
    {
        quantity=q;
    }
    void setAvailableStatua(bool t)
    {
        availableStatus=t;
    }
    void setMaxQuantity(int qty)
    {
        max_quantity=qty;
    }
    void addToInventory(int added_quantity)
    {
        if(quantity+added_quantity<=max_quantity)
        {
            quantity=quantity+added_quantity;
        }


    }
    bool isAvailable()
    {
        return availableStatus;
    }
    void purchase(int purchased_quantity)
    {
        if(getAvailbilityStatus()&& quantity>=purchased_quantity)
        {
            quantity=quantity-purchased_quantity;
        }
        else
        {
            cout<<"CAN'T POSSIBLE"<<endl;
        }

    }
    int updatePrice(int percent)
    {
        price=price+(price*percent)/100;
        return price;
    }

    void displayInventoryValue()
    {
        total=total+price*quantity;
        cout<<"the total value "<<price*quantity<<endl;
    }
    void displayDetails()
    {
        cout<<"NAME "<< name<<" "<<endl;
        cout<<"ID "<< id<<" "<<endl;
        cout<<"QUANTITY "<< quantity<<" "<<endl;
        cout<<"AVAILABILITY STATUS "<<availableStatus <<" "<<endl;
        cout<<"PRICE "<<price <<" "<<endl;

    }
    void setPrev()
    {
        prev=0;
    }


    float getTotalPrice()
    {

        return price*quantity;
    }


    void displayTotalInventoryValue()
    {
        cout<<"TOTAL VALUE FOR ALL INVENTORY "<<total<<endl;
    }
    ~Product()
    {
        cout<<"Object destroyed "<<endl;
    }




};
int Product::total=0;


int main()
{
    Product  p1("X",123,10,100);
    p1.setPrev();
    p1.displayInventoryValue();
    p1.displayTotalInventoryValue();
    Product  p2("Y",122,10,200);
    p2.displayInventoryValue();
    p2.displayTotalInventoryValue();
    Product  p3("Z",124,10,300);
    p3.displayInventoryValue();
    p3.displayTotalInventoryValue();




}

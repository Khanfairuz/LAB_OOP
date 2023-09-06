#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct product
{
    string  product_name;
    float price;
    int quantity;


};

class Category
{
private:
    string category_name;
    string id;
    int total_val;
    vector<product>v;
    bool applyCategory;
    int index;
    float total_inventory;
    int getIndex(string prname)
    {
        for(int i=0; i<v.size(); i++)
        {
            product k=v[i];
            if(k.product_name==prname)
            {
                return i;
            }
        }
        return -1;
    }



public:
    Category():applyCategory(false)
    {

    }
    Category(string cn, string id):category_name(cn),id(id),applyCategory(false)
    {

    }


    void addProduct( string pn,float price=0,int qn=0)
    {
        product k;
        k.product_name=pn;
        k.price=price;
        k.quantity=qn;
        v.push_back(k);

    }
    void addToInventory(string pr,int  added_quantity)
    {
        index=getIndex(pr);
        if(index==-1)
        {
          product k;
        k.product_name=pr;
        k.price=0;
        k.quantity=added_quantity;
        v.push_back(k);

        }
        else
        {
            product k;
            k.quantity=k.quantity+added_quantity;
        }


    }


    void purchase( string prname,int purchased_quantity)
    {
        index=getIndex(prname);
        if(index!=-1)
        {
            product k=v[index];

            if(k.quantity>0 && purchased_quantity<=k.quantity)
            {
                k.quantity=k.quantity-purchased_quantity;
            }
            else
            {
                cout<<"NOT POSSIBLE"<<endl;
            }
        }
        else
        {
            cout<<"NOT AVAILABLE "<<endl;
        }

    }
    void applyCategoryDiscount(float percent)
    {
        for(int i=0; i<v.size(); i++)
        {
            product k=v[i];
            k. price=k.price-(k.price*percent)/100;

        }
        applyCategory=true;
    }

    void applyProductDiscount(string prname,float percent)
    {
        index=getIndex(prname);
        if(index!=-1)
        {
            if(!applyCategory)
            {
                product k=v[index];

                k. price=k.price-(k.price*percent)/100;
            }

        }
        else
        {
            cout<<"NOT AVAILABLE "<<endl;
        }

    }

    int updatePrice(string prname,int percent)
    {

        index=getIndex(prname);
        if(index!=-1)
        {
            if(!applyCategory)
            {
                product k=v[index];

                k. price=k.price+(k.price*percent)/100;
            }

        }
        else
        {
            cout<<"NOT AVAILABLE "<<endl;
        }

    }

    float displayInventoryValue(string prname)
    {
        index=getIndex(prname);
        if(index!=-1)
        {
            product k=v[index];


            return k.price*k.quantity;

        }
        else
        {
            cout<<"NOT AVAILABLE "<<endl;
        }




    }
    void getTotalInventoryValue ()
    {

        for(int i=0; i<v.size(); i++)
        {
            product k=v[i];
            total_inventory=total_inventory+k.price;
        }


    }
    ~Category()
    {
        for(int i=0; i<v.size(); i++)
        {
            product k=v[i];
            cout<<"Category "<<category_name<<endl;
            cout<<"ID "<<id<<endl;
            cout<<"Product Name "<< k.product_name<<endl;
            cout<<"Price "<<k.price<<endl;
            cout<<"Quantity "<<k.quantity<<endl;


        }

    }




};



int main() {

    Category category1("Electronics", "C-001");
    Category category2("Clothing", "C-002");
    Category category3("Books", "C-003");


    category1.addProduct("Laptop", 1000, 5);
    category1.addProduct("Smartphone", 500, 10);

    category2.addProduct("T-Shirt", 20, 50);
    category2.addProduct("Jeans", 50, 30);

    category3.addProduct("Novel", 10, 100);
    category3.addProduct("Textbook", 50, 20);


    float initialInventoryValue = category1.displayInventoryValue("Laptop");
    cout << "Initial Inventory Value for Laptop: $" << initialInventoryValue << endl;

    category1.applyCategoryDiscount(10);


    category2.applyProductDiscount("T-Shirt", 15);


    category1.purchase("Laptop", 2);
    category2.purchase("T-Shirt", 25);
    category3.purchase("Textbook", 30);

    category1.addToInventory("Laptop", 3);
    category2.addToInventory("Jeans", 10);


    category3.updatePrice("Novel", 20);


    category1.getTotalInventoryValue();
    category2.getTotalInventoryValue();
    category3.getTotalInventoryValue();

    cout << "Total Inventory Value for Electronics: $" << endl;
    category1.getTotalInventoryValue();
    cout<< endl;
    cout << "Total Inventory Value for Clothing: $" <<endl;
     category2.getTotalInventoryValue();
     cout << endl;
    cout << "Total Inventory Value for Books: $" <<endl;
     category3.getTotalInventoryValue();
     cout << endl;

    return 0;
}




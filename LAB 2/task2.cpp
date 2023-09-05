#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
   private:
       int accNum;
       string holderName;
       string accType;
       float currBalance;
        int minBalance;
   public:
       BankAccount(int acc, string name ,string type,float balance ,int min_balance=2500):accNum(acc),holderName(name),accType(type),currBalance(balance),minBalance(min_balance)
       {


       }
       void setValue(int acc, string name ,string type,float balance ,int min_balance=2500)
       {
           accNum=acc;
           holderName=name;
           accType=type;
           currBalance=balance;
           minBalance=  min_balance;
       }
       void display()
       {
           cout<<"ACCOUNT NUMBER "<<accNum <<endl;
           cout<<"ACCOUNT HOLDER NAME "<<holderName <<endl;
           cout<<"ACCOUNT TYPE "<<accType <<endl;
            cout<<"CURRENT BALANCE "<<currBalance <<endl;
           cout<<"CURRENT BALANCE MINIMUM BALANCE "<<minBalance <<endl;

       }
       void showBalance()
       {
           cout<<"CURRENT BALANCE "<<currBalance <<endl;
       }
       void deposite(float money)
       {
          currBalance=currBalance+money;
       }
       void withdrawal(float money)
       {
           if(money<0)
           {

           }
        else if(currBalance-money>=minBalance)
           {
               currBalance=currBalance-money;
           }
           else if()
           {
               cout<<"NOT ENOUGH MONEY"<<endl;
           }


       }
       int giveInterest(int k=3)
       {
         float interest=(currBalance*k)/100;
         interest=interest-(interest*10)/100;
         currBalance=currBalance+interest;

       }
       ~BankAccount()
       {
           cout<<"Account of Mr."<<holderName<<" with account no "<<accNum<<" is destroyed with a balance BDT "<<currBalance<<endl;

       }



};
int main()
{
  BankAccount person(1234,"X","CURRENT",1200);
  person.deposite(2300);
  person.giveInterest(5);
  person.withdrawal(1200);



}

#include <iostream>
#include <string>

using namespace std;

class CCount
{
    //atributos
    private:
       string name, bank_account;
       double balance, rate_interest;

    public: 
       void setName(string n) 
       {
         if (n.length() == 0)
         {
            cout << "Error: String empty" << endl;
         }
           name = n;
       }
    };

int main()
{
    return 0;
}
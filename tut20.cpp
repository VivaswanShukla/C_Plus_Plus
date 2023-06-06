#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int ItemPrice[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice();
    void getPrice();
} s;

void shop ::setPrice()
{
    cout << "Enter the Item id of the product "<<counter+1<< " :" << endl;
    cin >> itemId[counter];
    cout << "Enter the Item price of the product: " << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void shop ::getPrice(){
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemId[i] << " is: " << ItemPrice[i] << endl;
    }
    
}

int main()
{
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.getPrice();
    return 0;
}
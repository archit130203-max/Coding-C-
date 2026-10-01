#include <iostream>
using namespace std;

class Product
{
public:
    string name;
    double price;
    int quantity;

    // Combine two products
    Product combine(Product p)
    {
        Product result;

        result.name = name + " + " + p.name;
        result.price = price + p.price;
        result.quantity = quantity + p.quantity;

        return result;
    }
};

// Return product having higher total value
Product higherValue(Product p1, Product p2)
{
    double total1 = p1.price * p1.quantity;
    double total2 = p2.price * p2.quantity;

    if (total1 > total2)
        return p1;
    else
        return p2;
}

int main()
{
    Product p1, p2, result;

    cout << "Enter first product name: ";
    cin >> p1.name;

    cout << "Enter price: ";
    cin >> p1.price;

    cout << "Enter quantity: ";
    cin >> p1.quantity;

    cout << "\nEnter second product name: ";
    cin >> p2.name;

    cout << "Enter price: ";
    cin >> p2.price;

    cout << "Enter quantity: ";
    cin >> p2.quantity;

    result = higherValue(p1, p2);

    cout << "\nProduct with higher total value:\n";
    cout << "Name = " << result.name << endl;
    cout << "Total Value = "
         << result.price * result.quantity << endl;

    result = p1.combine(p2);

    cout << "\nCombined Inventory:\n";
    cout << "Name = " << result.name << endl;
    cout << "Price = " << result.price << endl;
    cout << "Quantity = " << result.quantity;

    return 0;
}
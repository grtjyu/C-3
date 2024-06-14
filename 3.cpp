#include <iostream>
#include <string>

using namespace std;

const int MAX_PRODUCTS = 100;

struct Product {
    string name;
    double price;
};

class ShoppingCart {
private:
    Product products[MAX_PRODUCTS];
    int numProducts;
public:
    ShoppingCart() : numProducts(0) {}

    void addProduct(string name, double price) {
        if (numProducts < MAX_PRODUCTS) {
            products[numProducts].name = name;
            products[numProducts].price = price;
            numProducts++;
        } else {
            cout << "the shopping list is full" << endl;
        }
    }

    void printInvoice() {
        double totalPrice = 0.0;
        cout << "phurchase invoice:" << endl;
        for (int i = 0; i < numProducts; ++i) {
            cout <<"product: " << products[i].name << ": price - : " << products[i].price <<" \n";
            totalPrice += products[i].price;
        }
        cout<<"total price: " << totalPrice << endl;
    }
};

int main() {
    ShoppingCart cart;

    cart.addProduct("egg", 2.5);
    cart.addProduct("bread", 1.0);
    cart.addProduct("tea", 3.0);

    cart.printInvoice();

    return 0;
}

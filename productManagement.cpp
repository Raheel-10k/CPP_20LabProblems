#include "iostream"
using namespace std;

class Product {
    private: 
        int productID, quantityInStock;
        float price;
        string productName;

    public:
        Product() {
            productID = 0;
            quantityInStock = 0;
            price =0.00;
            productName="null";
        }
        Product(int prdID, int qInS, float p, string prdName) {
            productID = prdID;
            quantityInStock = qInS;
            price = p;
            productName = prdName;
        }

        void displayAll() {
            cout << "Product ID: " << productID << endl;
            cout << "Quantity: " << quantityInStock << endl;
            cout << "Price: " << price << endl;
            cout << "Product Name: " << productName << endl;
        }
};

int main() {
    int id, quantity;
    float price;
    string name;

    int n;
    cout << "Enter number of products: ";
    cin >> n;
    Product products[n];
    for (int i = 0; i < n; i++) {
        id=i+11101;
        cout << "Product Name: ";
        cin >> name;
        cout << "Quantity: ";
        cin >> quantity;
        cout << "Price: ";
        cin >> price;
        products[i]= Product(id, quantity, price, name);
    }

    cout << "\nAll products:\n";
    for (int j = 0; j < n; j++) {
        products[j].displayAll();
        cout << endl;
    }
}
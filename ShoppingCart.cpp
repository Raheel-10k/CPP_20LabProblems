#include "iostream"
using namespace std;

class Product {
    private: 
        int productID, quantityInStock, productInCart;
        float price;
        string productName;

    public:
        Product() {
            productID = 0;
            quantityInStock = 0;
            price =0.00;
            productName="null";
            productInCart = 0;
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

        void displayProduct() {
            if (quantityInStock == 0)
            {
                return;
            }
            else {
            cout << "Product ID: " << productID << endl;
            cout << "Quantity: " << quantityInStock << endl;
            cout << "Price: " << price << endl;
            cout << "Product Name: " << productName << endl;
            }
        }

        float getPrice() {
            return price;
        }

        int getQuantity() {
            return quantityInStock;
        }

        void updateQuantityInStock() {
            cout << "Quantity: " << quantityInStock << endl;
        }

        string productChosen() {
            quantityInStock-=1;
            return productName;
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
        id=i;
        cout << "Product Name (NOTE: DO NOT USE SPACE IN NAME): ";
        //getline(cin, name);
        cin>>name;
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
    
    float payAmount=0.00;
    char ch;
    int flag=0;
    string productName[100];
    do
    {
        int choice;
        
        cout << "Enter the product id of the product that you want to buy: ";
        cin >> choice;
        if((choice > 0 || choice <=n) && (products[choice].getQuantity() <= 0)) {
            cout << "Invalid product id OR Unavailable product entered, please retry." << endl;
            continue;
        }
        else {
            productName[flag]=products[choice].productChosen();
            payAmount += products[choice].getPrice();
            cout << "Product added in cart..." << endl;
            cout << "\nAll products:\n";
            for (int j = 0; j < n; j++) {
                products[j].displayProduct();
                cout << endl;
            }
        }

        cout << "Enter 'y' if you want to add more products to your cart. (Please note that you can only select 100 items at once.)" << endl;
        cin >> ch;
        ch=(char) tolower(ch);
        flag++;
    } while (ch=='y' && flag <100);
    

    cout<<"Products in cart: " << endl;
    for(int i =0; i<flag; i++) {
        cout<<productName[i]<<", ";
    }
    cout<<endl;

    cout << "Amount to pay is: " << payAmount;

    return 0;
}
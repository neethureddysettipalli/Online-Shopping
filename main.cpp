#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n================================\n";
        cout << " ONLINE SHOPPING CART SYSTEM\n";
        cout << "================================\n";
        cout << "1. Display Products\n";
        cout << "2. Add Product to Cart\n";
        cout << "3. Remove Product from Cart\n";
        cout << "4. View Shopping Cart\n";
        cout << "5. Place Order\n";
        cout << "6. View Order History\n";
        cout << "7. Exit\n";
        cout << "================================\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Display products selected.\n";
                break;

            case 2:
                cout << "Add product to cart selected.\n";
                break;

            case 3:
                cout << "Remove product from cart selected.\n";
                break;

            case 4:
                cout << "View cart selected.\n";
                break;

            case 5:
                cout << "Place order selected.\n";
                break;

            case 6:
                cout << "View order history selected.\n";
                break;

            case 7:
                cout << "Thank you for shopping!\n";
                break;

            default:
                cout << "Invalid choice. Select 1 to 7.\n";
        }

    } while (choice != 7);

    return 0;
}
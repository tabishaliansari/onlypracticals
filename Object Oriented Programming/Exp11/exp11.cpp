#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;
struct Item{
    int id;
    string name;
    double price;
    int quantity;
};
class InventorySystem{
private:
    vector<Item> items;

public:
    void addItem(int id, const string &name, double price, int quantity){
        Item newItem = {id, name, price, quantity};
        items.push_back(newItem);
    }
    void displayInventory() const{
        cout << "Inventory:\n";
        cout << setw(5) << "ID" << setw(20) << "Name" << setw(10) << "Price" << setw(10)<< "Quantity" << endl;
        for (const auto &item : items){
            cout << setw(5) << item.id << setw(20) << item.name << setw(10) << item.price << setw(10) << item.quantity << endl;
        }
    }
    void saveToFile(const string &filename) const{
        ofstream outFile(filename);
        if (!outFile.is_open()){
            cerr << "Error opening file for writing.\n";
            return;
        }
        for (const auto &item : items){
            outFile << item.id << "," << item.name << "," << item.price << "," << item.quantity<< "\n";
        }
        outFile.close();
        cout << "Inventory saved to file.\n";
    }
    void loadFromFile(const string &filename){
        ifstream inFile(filename);
        if (!inFile.is_open()){
            cerr << "Error opening file for reading.\n";
            return;
        }
        items.clear();
        int id, quantity;
        double price;
        string name;
        char comma;
        while (inFile >> id >> comma >> ws && getline(inFile, name, ',') >> ws >> price >> comma >> ws >> quantity){
            Item newItem = {id, name, price, quantity};
            items.push_back(newItem);
        }
        inFile.close();
        cout << "Inventory loaded from file.\n";
    }
};
int main(){
    InventorySystem inventory;
    inventory.addItem(1, "Item1", 10.99, 50);
    inventory.addItem(2, "Item2", 20.49, 30);
    inventory.displayInventory();
    inventory.saveToFile("inventory.txt");
    inventory.loadFromFile("inventory.txt");
    inventory.displayInventory();
    return 0;
}
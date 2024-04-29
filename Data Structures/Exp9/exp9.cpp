#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string, string> capitals;
void insert_elements()
{
    string key;
    string value;
    cout << "\nEnter the name of the country : ";
    cin >> key;
    cout << "Enter the capital of " << key << " : ";
    cin >> value;
    capitals[key] = value;
}
void print_elements()
{
    for (auto item : capitals)
    {
        cout << "Name of the country " << item.first << ": Name of the capital ";
        cout << item.second << endl;
    }
}
void delete_elements()
{
    string key_to_be_deleted;
    cout << "\nEnter the name of the country that you want to delete : ";
    cin >> key_to_be_deleted;
    capitals.erase(key_to_be_deleted);
}
void search_elements()
{
    string key_to_be_searched;
    cout << "\nEnter the name of the country that you want to search : ";
    cin >> key_to_be_searched;
    cout << "Capital of " << key_to_be_searched << " is " << capitals[key_to_be_searched] << "\n";
}
void update_elements()
{
    string key_to_be_updated;
    string new_key;
    cout << "\nEnter the name of the country whose capital you want to update : ";
    cin >> key_to_be_updated;
    cout << "Enter the name of new capital : ";
    cin >> new_key;
    capitals[key_to_be_updated] = new_key;
}

int main()
{
    int choice;
    cout << "\n1. To insert data into the Dictionary." << endl;
    cout << "2. To print data from the Dictionary." << endl;
    cout << "3. To delete data from the Dictionary." << endl;
    cout << "4. To search data from the Dictionary." << endl;
    cout << "5. To update data from the Dictionary." << endl;
    cout << "0. To exit the code." << endl;
    while (1)
    {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            insert_elements();
            break;
        case 2:
            cout << endl;
            cout << "Contents of the Dictionary are :- \n";
            print_elements();
            break;
        case 3:
            cout << endl;
            delete_elements();
            cout << "Element deleted sucessfully.\n";
            break;
        case 4:
            cout << endl;
            cout << "Result of the search in the dictionary is :- ";
            search_elements();
            break;
        case 5:
            cout << endl;
            update_elements();
            cout << "Contents of the Dictionary updated sucessfully.\n";
            break;
        default:
            cout << "Please Enter valid input.";
        }
    }
    return 0;
}
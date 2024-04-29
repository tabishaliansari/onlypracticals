#include <iostream>
#include <string>
using namespace std;
int main(){
    string temp;
    char str[50], choice;
    int len, templen, pos, counter;
    bool substr, loop = true;
    cout << "Enter string: ";
    getline(cin, temp);
    len = temp.length();
    for (int i = 0; i < len; i++){
        str[i] = temp[i];
    }
    cout << "1. Append\n2. Insert\n3. Search\n4. Exit" << endl;
    while (loop){
        cout << "Enter operation: ";
        cin >> choice;
        switch (choice){
        case '1':
            cout << "Enter string to be appended: ";
            cin >> temp;
            templen = temp.length();
            for (int i = len; i < len + templen; i++){
                str[i] = temp[i - len];
            }
            len += templen;
            cout << "Updated string: " << str << endl;
            break;

        case '2':
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter string to be inserted: ";
            cin >> temp;
            templen = temp.length();
            for (int i = len + templen - 1; i > templen + pos - 1; i--){
                str[i] = str[i - templen];
            }
            for (int i = pos; i < pos + templen; i++){
                str[i] = temp[i - pos];
            }
            len += templen;
            cout << "Updated string: " << str << endl;
            break;

        case '3':
            cout << "Enter string to be searched: ";
            cin >> temp;
            templen = temp.length();
            substr = false;
            for (int i = 0; i <= len - templen; i++){
                counter = 0;
                for (int j = 0; j < templen; j++){
                    if (str[i + j] == temp[j]){
                        counter++;
                    }
                    else{
                        break;
                    }
                }
                if (counter == templen){
                    substr = true;
                    break;
                }
            }
            if (substr){
                cout << "Substring exist!" << endl;
            }
            else{
                cout << "Substring doesnt exist" << endl;
            }
            break;
        case '4':
            loop = false;
            break;
        }
    }
}

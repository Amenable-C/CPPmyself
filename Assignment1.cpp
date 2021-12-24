#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    string cmd;
    cin >> cmd;
    transform(begin(cmd), end(cmd), begin(cmd), [](unsigned char c){return tolower(c);});

    int intNum = 0, longNum = 0, floatNum = 0, doubleNum = 0;
    while(cmd != "quit"){
        if(cmd == "int"){
            cout << numeric_limits<int>::max() << " " << numeric_limits<int>::min() << endl;
            intNum++;
        }
        else if(cmd == "long"){
            cout << numeric_limits<long>::max() << " " << numeric_limits<long>::min() << endl;
            longNum++;
        }
        else if(cmd == "float"){
            cout << numeric_limits<float>::max() << " " << numeric_limits<float>::min() << endl;
            floatNum++;
        }
        else if(cmd == "double"){
            cout << numeric_limits<double>::max() << " " << numeric_limits<double>::min() << endl;
            doubleNum++;
        }
        else{
            cout << "Invalid Command" << endl;
        }
        cin >> cmd;
        transform(begin(cmd), end(cmd), begin(cmd), [](unsigned char c){return tolower(c);});
    }
    cout << "=== the number of types ===" <<endl;
    cout << "int: " << intNum << endl;
    cout << "long: " << longNum << endl;
    cout << "float: " << floatNum << endl;
    cout << "double: " << doubleNum;
}


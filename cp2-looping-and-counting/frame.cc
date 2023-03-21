#include <iostream>
#include <string>

// specify standard library names
using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
    cout << "Please enter your first name: ";

    // read the name
    string name;
    cin >> name;

    // build the message that we intend the greeting
    const string greeting = "Hello, " + name + "!";
    const int pad = 1;

    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    cout << endl;

    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;

        while (c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}
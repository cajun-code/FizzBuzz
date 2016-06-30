/***
 * FizzBuzz Solution
 * 6/20/2016
 * Allan Davis
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    // Get file name from command line
    string filename = argv[1];
    int fizz = 3;
    int buzz = 5;
    int length = 15;
    // Open the file
    ifstream file (filename.c_str());
    // read line in file
    while(!file.eof()) {
        file >> fizz >> buzz >> length;

        // start looping through till counter
        for (int i = 1; i <= length; i++) {
            if (i > 1)
                cout << " ";
            if ((i % fizz) == 0)
                cout << "F";
            if ((i % buzz) == 0)
                cout << "B";
            if ((i % fizz) != 0 && (i % buzz) != 0)
                cout << i;
        }
        cout << endl;
    }
    return 0;
}
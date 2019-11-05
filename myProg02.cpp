// myProg02.cpp
// Author: John Judge
// Date: 10/29/19
// Counts number of ducks, animals, and animals that are not ducks in a text file

#include <iostream> // for printf()

#include <cstdlib> // for exit(), perror()

#include <fstream> // for ifstream

#include<string>

using namespace std;

int main(int argc, char * argv[]) {
    if (argc != 2) {
        // if argc is not 2, print an error message and exit
        cerr << "Usage: " << argv[0] << " inputFile" << endl;
        exit(1); // defined in cstdlib
    }
    ifstream in ;
    string str; 
    in .open(argv[1]);
    getline( in , str);
    int numAnimals = 0;
    int numNotDucks = 0;
    int numDucks = 0;
    while ( in ) {
        if (str != "duck") {
            numNotDucks++;
        } else if ( in ) {
            numDucks++;
        }
        numAnimals++;
        getline( in , str);
    }
    cout << "Report for "<<argv[1]<<":" << endl <<
        "   Animal count:    " << numAnimals << endl <<
        "   Duck count:      " << numDucks << endl <<
        "   Non duck count:  " << numNotDucks << endl;

    return 0;
}

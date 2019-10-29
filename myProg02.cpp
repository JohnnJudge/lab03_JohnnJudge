// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream
#include<string>
using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  ifstream in;
  string str;
  getLine(in,str);
  int numAnimals = 0;
  int numNotDucks = 0;
  int numDucks = 0;
  in.open(argv[1]);
  while(in){
	if(str != "duck"){
		numNotDucks++;
		numAnimals++;
	}else if(in){
	numDucks++;
	numAnimals++;
	}
	getline(in,str);
  }
  cout << "Report for animals01.txt:" << endl
  << "   Animal count:    " <<numAnimals << endl
  << "   Duck count:      "<<numDucks << endl
  << "   Non duck count:  "<<numNotDucks << endl;


  return 0;
}

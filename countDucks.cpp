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
  int i;
  in.open(argv[1]);
  while(in){
	getline(in,str);
	if(str == "duck"){
		i++;
	}

  }
  cout << "There were " << i << " ducks in " << argv[1] << endl;
  return 0;
}

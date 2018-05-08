#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream output;

  // Create a file
  output.open("scores123.txt");

  // Write two lines
  output << "John" << " " << "TAT" << " " << "Smith" 
    << " " << 90 << endl;
  output << "Eric" << " " << "KKK" << " " << "Jones" 
    << " " << 85 << endl;

  output.close();

  cout << "Done" << endl;

  return 0;
}

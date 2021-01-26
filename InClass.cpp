#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream inFS;     // Input file stream
   int fileNum1;      // Data value from file
   int fileNum2;      // Data value from file
   ofstream outFS; // Output file stream

   // Try to open file
   cout << "Opening file numFile.txt." << endl;
   // Open file
   outFS.open("myoutfile.txt");

   inFS.open("numFile.txt");
   if (!inFS.is_open()) {
      cout << "Could not open file numFile.txt." << endl;
      return 1; // 1 indicates error
   }

   if (!outFS.is_open()) {
      cout << "Could not open file myoutfile.txt." << endl;
      return 1;
   }

   cout << "Reading and printing numbers." << endl;

   while (!inFS.fail())
   {
     cout << "num: " << filNum << endl;

     if(fileNum % 2 == 0)
     {
       writeToFile("evenfile.txt", to_string(filenum));
     }
     inFS >> fileNum;
   }
   if (!inFS.eof())
   {
     cout << "Input failure before reaching end of file." << endl;
   }

   cout << "Closing file myfile.txt." << endl;

   // Can now use inFS stream like cin stream
   // numFile.txt should contain two integers, else problems
   cout << "Reading two integers." << endl;
   inFS >> fileNum1;
   inFS >> fileNum2;
   cout << "Closing file numFile.txt." << endl;
   inFS.close(); // Done with file, so close it

   // Write to file
   outFS << "Hello" << endl;
   outFS << "1 2 3" << endl;

   // Done with file, so close
   outFS.close();

   // Output values read from file
   cout << "num1: " << fileNum1 << endl;
   cout << "num2: " << fileNum2 << endl;
   cout << "num1 + num2: " << (fileNum1 + fileNum2) << endl;

   return 0;
}

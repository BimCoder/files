#include <iostream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123;
   char c = 'J';
ofstream DisplayFile;

DisplayFile.open("abc.txt");
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;
DisplayFile.close();
   return 0;
}


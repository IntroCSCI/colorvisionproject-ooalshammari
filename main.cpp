#include <iostream>

using namespace std;

int main()
{
  int count = 0;
  // my project color vision project
  cout<< "Enter Your to tatal number of color vision (RGB) tests"<<"\n";

  cin >> count;
  int R[count];
   int G[count];
   int B[count];
cout<< "Enter RGB values of test in sequence 1st R 2nd G 3rd B for all test"<<"\n";


   for (int i =0; i < count; i++)
   {
     cin>> R[i];
      cin>> G[i];
       cin>> B[i];
   }

  return 0;
}

#include<iostream>

using namespace std;

class MyString {
  public:
  MyString() 
  {
    cout << "MyString constructor" << endl;
  }
  ~MyString() 
  {
    cout<< "MyString destructor" << endl;
  }
  private:
  char* pString;
};

int main () {
  cout << "Hello, World!" << endl;
  
  MyString myString;

  cout<< "End of main" << endl;
  return 0;
}



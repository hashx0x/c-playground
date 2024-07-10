#include <cstring>
#include <iostream>
using namespace std;

class MyString {
 public:
  MyString() { cout << "MyString constructor" << endl; }
  ~MyString() { cout << "MyString destructor" << endl; }
  MyString(const string data) {}

  void setData(const char* param) {
    // pointer null 아닐시 기존 메모리 해제
    if (pString != nullptr) {
      delete[] pString;
    }

    int paramLength = strlen(param);
    // size_t paramLength = strlen(param);

    cout << paramLength << endl;

    pString = new char[paramLength + 1];  // null 0 포함

    strcpy(pString, param);
  }
  char* getData() { return pString; }

 private:
  char* pString = nullptr;
};

int main() {
  cout << "Hello, World!" << endl;

  MyString myString;

  myString.setData("Hello");

  cout << "myString GetData : " << myString.getData() << endl;

  cout << "End of main" << endl;
  return 0;
}

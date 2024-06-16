#include <iostream>

using namespace std;


class Test {
  public:
    Test() 
    {
      cout << "Test constructor" << endl;
    }
    Test(const int data) : nData(data)  // 변환생성자 (매개변수 하나인 생성자)
    {
      cout << "Test constructor with data" << endl;
    }
    Test(const Test& rhs) : nData(rhs.nData) 
    {
      // this->nData = rhs.nData;
      cout << "Test copy constructor" << endl;
    }
    ~Test() 
    {
      cout<< "Test destructor" << endl;
    }

    int GetData() const 
    {
      return nData;
    }
    void SetData(const int data) 
    {
      nData = data;
    }
  private:
    char* pString;
    int nData;
};


Test createTestInstance(Test rhs) {
  cout << "createTestInstance" << endl;
  rhs.SetData(100);
  return rhs;
}

int main () {
  cout << "Hello, World!" << endl;
  
  createTestInstance(10);  // Test(const int data) 생성자 호출
  
  cout<< "End of main" << endl;
  return 0;
}
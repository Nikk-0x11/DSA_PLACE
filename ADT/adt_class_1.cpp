#include <iostream>

using namespace std;

class Animal
{
private:
  string m_name;

public:
  void GiveName(string name)
  {
    m_name = name;
  }

  string GetName()
  {
    return m_name;
  }
};

int main()
{
  Animal dog = Animal();
  dog.GiveName("dog");

  cout << "Animal was a " << dog.GetName() << endl;

  return 0;
}
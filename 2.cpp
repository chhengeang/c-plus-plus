#include <iostream>
using namespace std;

int main()
{
  int id;
  char name[20];
  char sex;
  float avg;
  cout << "enter id: ";
  cin >> id;
  cout << "enter name: ";
  cin.getline(name, 20);
  cout << "enter sex: ";
  cin >> sex;
  cout << "enter avg: ";
  cin >> avg;
  cout.precision(2);
  cout.setf(ios::fixed, ios::floatfield);
  cout << "id: " << id << "\n";
  cout << "name: " << name << "\n";
  cout << "sex: " << sex << "\n";
  cout << "avg: " << avg << "\n";
  return 0;
}

#include <iostream>
using namespace std;

int main()
{
  int num1, num2, mais, menos, vezes, divide;
  
  cout << "Digite um numero: " <<endl;
  cin >> num1;
  cout << "Digite outro numero: " <<endl;
  cin >> num2;
  
  mais = num1 + num2;
  menos = num1 - num2;
  vezes = num1 * num2;
  divide = num1 / num2;
  
  cout << "A soma dos numeros digitados e: " << mais <<endl;
  cout << "A subtracao dos numeros digitados e: " << menos <<endl;
  cout << "A multiplicacao dos numeros digitados e: " << vezes <<endl;
  cout << "A divisao dos numeros digitados e: " << divide <<endl;
  
  return 0;
}

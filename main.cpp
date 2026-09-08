#include <iostream>
int main() {
    setlocale(LC_ALL, "UA");
    double num1;
    double num2;
    char operation;
    
    std::cout <<"Введіть перше число: ";    
    std::cin >> num1;
       
    std::cout <<"Введіть друге число: ";
    std::cin >> num2;

    std::cout << "Оберіть операцію: ( +, -, *, / ) ";
    std::cin >> operation;
              
    switch (operation){
      
      case '+': 
      std::cout << num1 + num2; 
      break; 
      
      case '-':
      std::cout << num1 - num2;  
      break;
      
      case '*':
      std::cout << num1 * num2;
      break;
       
      case '/':
      std::cout << num1 / num2;

      if (num2 == 0){
        std::cout << "На нуль ділити не можна";
        }
      else{
        std::cout << num1 / num2;
        }
        
      break; 

      default: 
      std::cout <<"Невідома операція"; break;            
      }        
        
    return 0;
}

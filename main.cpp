#include <iostream>

struct accountInBank 
{
  int account_number;
  std::string investor_name;
  float amount_on_account;  
};
// функция изменяет баланс счета

void change_amount (accountInBank& acc, float tmpAmount) {
  acc.amount_on_account = tmpAmount;
}

int main() {
  int tmpAccount {0};
  std::string tmpName;
  float tmpAmount {0};
  std::cout << "Введите номер счёта: ";
  std::cin >> tmpAccount;
  std::cout << std::endl << "Введите имя владельца: ";
  std::cin >> tmpName;
  std::cout << std::endl << "Введите баланс: ";
  std::cin >> tmpAmount;
  accountInBank investor = {tmpAccount, tmpName, tmpAmount};
  std::cout << std::endl << "Ваш счет до изменения баланса: " << std::endl;
  std::cout << investor.account_number << "\t" << investor.investor_name << "\t" << investor.amount_on_account << std::endl;
  std::cout << std::endl << "Введите новый баланс: ";
  std::cin >> tmpAmount;
  change_amount(investor,tmpAmount);
  std::cout << std::endl << "Ваш счет после изменения баланса: " << std::endl;
  std::cout << investor.account_number << "\t" << investor.investor_name << "\t" << investor.amount_on_account << std::endl;
  return 0;
}
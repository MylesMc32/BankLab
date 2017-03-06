#include "Account.h"



Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

void Account::Desposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
}


Account::~Account()
{
}

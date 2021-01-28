#include "PersonType.h"

void BillingSystem::PersonType::print() const
{
	cout << firstName << " " << lastName;
}

void BillingSystem::PersonType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}

string BillingSystem::PersonType::getFirstName() const
{
	return firstName;
}

string BillingSystem::PersonType::getLastName() const
{
	return lastName;
}

BillingSystem::PersonType::PersonType(string first, string last)
{
	firstName = first;
	lastName = last;
}

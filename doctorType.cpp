#include "doctorType.h"

#include <utility>

string BillingSystem::doctorType::getSpecialty() const
{
	return specialty;
}

void BillingSystem::doctorType::setSpecialty(const string& newSpecialty)
{
	this->specialty = newSpecialty;
}

BillingSystem::doctorType::doctorType()
{
	this->setName("","");
	specialty = "";
}

BillingSystem::doctorType::doctorType(string firstName, string lastName, string doctorSpecialty)
{
	this->setName(std::move(firstName), std::move(lastName));
	specialty = std::move(doctorSpecialty);
}

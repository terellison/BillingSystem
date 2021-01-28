#include "billType.h"

#include <utility>

BillingSystem::billType::billType(vector<pair<string, int>> patientCharges, _GUID patientID)
{
	charges = std::move(patientCharges);
	patientId = patientID;
}

BillingSystem::billType::billType()
= default;

vector<pair<string, int>> BillingSystem::billType::getCharges() const
{
	return charges;
}

_GUID BillingSystem::billType::getPatientId() const
{
	return patientId;
}

void BillingSystem::billType::setCharges(vector<pair<string, int>> patientCharges)
{
	charges = std::move(patientCharges);
}

void BillingSystem::billType::setPatientId(_GUID id)
{
	patientId = id;
}





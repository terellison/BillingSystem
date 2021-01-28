#include "patientType.h"
#include <combaseapi.h>

#include <utility>

BillingSystem::patientType::patientType()
{
	CoCreateGuid(&id);
	this->setName("","");
	age = 0;
}

BillingSystem::patientType::patientType(string firstName, string lastName, int age, dateType dateOfBirth, dateType admitDate, dateType dischargeDate, doctorType doctor)
{
	CoCreateGuid(&id);
	this->setName(std::move(firstName),std::move(lastName));
	this->age = age;
	this->dateOfBirth = dateOfBirth;
	this->admitDate = admitDate;
	this->dischargeDate = dischargeDate;
	this->attendingDoctor = std::move(doctor);
}

_GUID BillingSystem::patientType::getId() const
{
	return id;
}

void BillingSystem::patientType::setId(_GUID id)
{
	this->id = id;
}

int BillingSystem::patientType::getAge() const
{
	return age;
}

void BillingSystem::patientType::setAge(int age)
{
	this->age = age;
}

BillingSystem::dateType BillingSystem::patientType::getDateOfBirth() const
{
	return dateOfBirth;
}

void BillingSystem::patientType::setDateOfBirth(dateType date)
{
	dateOfBirth = date;
}

BillingSystem::dateType BillingSystem::patientType::getAdmitDate() const
{
	return admitDate;
}

void BillingSystem::patientType::setAdmitDate(dateType date)
{
	admitDate = date;
}

BillingSystem::dateType BillingSystem::patientType::getDischargeDate() const
{
	return dischargeDate;
}

void BillingSystem::patientType::setDischargeDate(dateType date)
{
	dischargeDate = date;
}

BillingSystem::doctorType BillingSystem::patientType::getAttendingDoctor() const
{
	return attendingDoctor;
}

void BillingSystem::patientType::setAttendingDoctor(doctorType doctor)
{
	attendingDoctor = doctor;
}



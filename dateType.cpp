#include "dateType.h"

BillingSystem::dateType::dateType()
{
	month = 0;
	day = 0;
	year = 0;
}

BillingSystem::dateType::dateType(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this->year = year;
}

string BillingSystem::dateType::getDate() const
{
	return std::to_string(month) + '/' + std::to_string(day) + '/' + std::to_string(year);
}

int BillingSystem::dateType::getDay() const
{
	return day;
}

int BillingSystem::dateType::getMonth() const
{
	return month;
}

int BillingSystem::dateType::getYear() const
{
	return year;
}

void BillingSystem::dateType::setDate(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this->year = year;
}
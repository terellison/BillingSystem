#pragma once
#include <string>
using namespace std;

namespace BillingSystem
{
	class dateType
	{
		int day;
		int month;
		int year;
	public:
		int getDay() const;
		int getMonth() const;
		int getYear() const;
		string getDate() const;
		void setDay(int day);
		void setMonth(int month);
		void setYear(int year);
		void setDate(int month, int day, int year);
		dateType();
		dateType(int month, int day, int year);
	};
}


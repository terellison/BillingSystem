#pragma once
#include "PersonType.h"


namespace BillingSystem
{
	class doctorType : public BillingSystem::PersonType
	{
	private:
		string specialty;

	public:
		string getSpecialty() const;
		void setSpecialty(const string& newSpecialty);
		doctorType();
		doctorType(string firstName, string lastName, string doctorSpecialty);
	};
}


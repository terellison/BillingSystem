#pragma once
#include <string>
#include <utility>
#include <vector>
#include <guiddef.h>
using namespace std;

namespace BillingSystem
{
	class billType
	{
		vector<pair<string,int>> charges;
		_GUID patientId{};
	public:
		billType(vector<pair<string,int>> patientCharges, _GUID patientID);
		billType();
		_GUID getPatientId() const;
		vector<pair<string,int>> getCharges() const;
		void setPatientId(_GUID id);
		void setCharges(vector<pair<string,int>> patientCharges);
	};
}


#pragma once
#include "PersonType.h"
#include <guiddef.h>
#include "dateType.h"
#include "doctorType.h"

namespace BillingSystem
{
	class patientType : public BillingSystem::PersonType
	{
		_GUID id{};
		int age;
		dateType dateOfBirth;
		dateType admitDate;
		dateType dischargeDate;
		doctorType attendingDoctor;
		
			
		public:
		patientType();
		patientType(string firstName, string lastName, int age, dateType dateOfBirth, dateType admitDate, dateType dischargeDate, doctorType doctor);
		_GUID getId() const;
		void setId(_GUID id);
		int getAge() const;
		void setAge(int age);
		dateType getDateOfBirth() const;
		void setDateOfBirth(dateType date);
		dateType getAdmitDate() const;
		void setAdmitDate(dateType date);
		dateType getDischargeDate() const;
		void setDischargeDate(dateType date);
		doctorType getAttendingDoctor() const;
		void setAttendingDoctor(doctorType doctor);
		};
}



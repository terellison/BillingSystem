#include <iomanip>
#include <iostream>
#include "billType.h"
#include "doctorType.h"
#include "patientType.h"
using namespace BillingSystem;
int main()
{
	// Initialize types
	auto* doctor = new doctorType("Jim", "Johnson", "Pediatrics");
	doctor->setSpecialty("Chiropractor");
	auto* patientDOB = new dateType(12,5,1983);
	auto* admitDate = new dateType(10,12,2005);
	auto* dischargeDate = new dateType(10,15,2005);
	auto* patient = new patientType("Chicken","George",23,*patientDOB,*admitDate,*dischargeDate,*doctor);
	// Because the rubric told me to
	patient->setAge(22);
	patient->setDateOfBirth(*patientDOB);
	patient->setAdmitDate(*admitDate);
	patient->setDischargeDate(*dischargeDate);
	patient->setAttendingDoctor(*doctor);
	auto* bill = new billType();
	bill->setPatientId(patient->getId());
	// Add charges to the bill
	auto* charges = new vector<pair<string,int>>();
	auto* chargeOne = new pair<string,int>("Checkup",100);
	auto* chargeTwo = new pair<string,int>("ER",1000);
	auto* chargeThree = new pair<string,int>("Tax",20);
	charges->insert(charges->begin(), *chargeOne);
	charges->insert(charges->begin() + 1,*chargeTwo);
	charges->insert(charges->begin() + 2, *chargeThree);
	bill->setCharges(*charges);
	// Print receipt
	cout << "Printing your receipt..." << endl << endl;
	cout << "Patient name: " << patient->getFirstName() << " " << patient->getLastName() << endl;
	cout << "Patient DOB: " << patient->getDateOfBirth().getDate() << " Age: " << patient->getAge() << endl;
	cout << "Attending physician: " << patient->getAttendingDoctor().getFirstName()
	<< " " << patient->getAttendingDoctor().getLastName() << " Specialty: " << patient->getAttendingDoctor().getSpecialty() << endl;
	cout << "Admit date: " << patient->getAdmitDate().getDate() << endl;
	cout << "Discharge date: " << patient->getDischargeDate().getDate() << endl;
	cout << endl << "CHARGES" << endl << "--------------" << endl;
	int total = 0;
	// Loop through charges, printing them and adding to the total
	for(const pair<string,int>& charge: bill->getCharges())
	{
		cout << charge.first << ": $" << setprecision(2) << fixed << charge.second << endl;
		total += charge.second;
	}
	cout << "Total Due: $" << setprecision(2) << fixed << total << endl << endl;
	system("pause");
}
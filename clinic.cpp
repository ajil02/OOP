#include<iostream>
#include<stdlib.h>
using namespace std;
class patient
{
	public:
		int pid;
		string pname;
		void getPatientInfo();
		void makeAppointment();
		void putPatientInfo();
		void Diagnosis();
		void Billing();
		void printBill ();
		
	private :
		string address,gender,dname,bgroup,app_date,diag,medinfo;
		int ph,doc_fee,med_charge,total;
		
};
		
void patient :: getPatientInfo()
{
		
	cout<<"Enter the patient Id:";
	cin>>pid;
	cout<<"Enter the patient name:";
	cin>>pname;
	cout<<"Enter the address:";
	cin>>address;
	cout<<"Enter the gender:";
	cin>>gender;
	cout<<"Enter the phone number:";
	cin>>ph;
	cout<<"Enter the blood group:";
	cin>>bgroup;
}

void patient :: putPatientInfo()
{
	cout<<"Patient Id is:"<<pid<<endl;
	cout<<"Patient name is:"<<pname<<endl;
	cout<<"Patient address is:"<<address<<endl;
	cout<<"Patient gender is:"<<gender<<endl;
	cout<<"Patient phone number is:"<<ph<<endl;
	cout<<"Patient blood group is:"<<bgroup<<endl;
}

void patient :: makeAppointment()
{
	cout<<"Enter the Doctor name:";
	cin>>dname;
	cout<<"Enter the appoinment date:";
	cin>>app_date;
}

void patient :: Diagnosis()
{
	cout<<"Enter the diagnosis information:";
	cin>>diag;
	cout<<"Enter the medicine information:";
	cin>>medinfo;
}

void patient :: Billing()
{
	cout<<"Enter the Doctor fee:";
	cin>>doc_fee;
	cout<<"Enter the medicine charge:";
	cin>>med_charge;
	total=doc_fee+med_charge;
	cout<<"The total charge is:"<<total;
}
	
void patient :: printBill()
{
	cout<<"Patient name:"<<pname<<endl;
	cout<<"Patient Id:"<<pid<<endl;
	cout<<"Doctor name:"<<dname<<endl;
	cout<<"Doctor fee:"<<doc_fee<<endl;
	cout<<"Medicine charge:"<<med_charge<<endl;
	cout<<"Total charge:"<<total;
}

int main()
{
	patient pat;
	int ch;
	while(1)
	{
		cout<<"\nMENU \n1.getPatientInfo \n2.putPatientInfo \n3.makeAppointment \n4.Diagnosis \n5.Billing \n6.printBill \n7.Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				pat.getPatientInfo();
				break;
			}
			case 2:
			{
				pat.putPatientInfo();
				break;
			}
			case 3:
			{
				pat.makeAppointment();
				break;
			}
			case 4:
			{
				pat.Diagnosis();
				break;
			}
			case 5:
			{
				pat.Billing();
				break;
			}
			case 6:
			{
				pat.printBill();
				break;
			}
			case 7:
			{
				exit(0);
			}
		}
	}
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<complex>
using namespace std;


void showdata(string *Reg_No,string *program,string *name,string *cgpa,string *contact,int i) {
	int len = 0;
	string a;
	cout << "Enter a Reg " << endl;
	cin >> a;
	for (int j = 0; j < i; j++) {
		len++;
		if (a == Reg_No[i]) {
			cout << Reg_No[i] << " " << program[i] << " " << name[i] << " " << cgpa[i] << " " << contact[i] << endl;
		}
	}
}
int main() {
	string a, Reg_No[10],program[10], name[10], cgpa[10],contact[10];
	ifstream in("lab02.csv");
	/*string a;*/
	int i = 0;
	int len = 0;


	while (getline(in,a))
	{
		stringstream ss(a);
		getline(ss, Reg_No[i], ',');
		cout << Reg_No[i]<<" ";
		getline(ss, program[i], ',');
		cout << program[i] << " ";
		getline(ss, name[i], ',');
		cout << name[i] << " ";
		getline(ss, cgpa[i], ',');
		cout << cgpa[i] << " ";
		getline(ss, contact[i], ',');
		cout << contact[i] << " ";
		i++;
		cout << "\n";
	}
	showdata(Reg_No,program,name,cgpa,contact,i);



}
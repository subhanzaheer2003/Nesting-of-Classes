#include<iostream>
using namespace std;
class Student
{
private:
	int roll;
	string name;
	class Address
	{
	private:
		int houseNo;
		string Col;
		string street;
		string city;
	public:
		void setAddress(int h, string a, string b, string c)
		{
			houseNo = h;
			Col = a;
			street = b;
			city = c;
		}
		void display()
		{
			cout << "Address is : " << " ";
			cout << houseNo << " " << Col << " " << street << " " << city << " " << endl;
		}
	};
	Address add;
public:
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
	void setRoll(int roll)
	{
		this->roll = roll;
	}
	int getRoll()
	{
		return roll;
	}
	void _setAddress(int h, string a, string b, string c)
	{
		add.setAddress(h, a, b, c);
	}
	void _display()
	{
		cout << "Data of Student is : " << endl;
		cout << name << endl;
		cout << roll << endl;
		add.display();
	}
};
int main()
{
	Student Subhan;
	Subhan.setName("Subhan");
	Subhan.setRoll(666);
	Subhan._setAddress(27, "Ghosia_Colony", "Main_Walton_Road", "Lahore_Cantt");
	Subhan._display();
	return 0;
}
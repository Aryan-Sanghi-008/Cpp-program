#include <bits/stdc++.h>
using namespace std;

struct student
{
	string name;
	string roll_num;
	string age;
	string gender;
	struct student *next;
};

struct student *first, *last, *point;

void insert()
{

	fstream sfile;

	sfile.open("student_profile.txt", ios::out | ios::app); 

	cout << "Enter the details of student:" << endl;

	string name, roll_num, age, gender;

	cout << "Name of the student : ";
	cin >> name;
	cout << "Roll number of the student : ";
	cin >> roll_num;
	cout << "Age of the student : ";
	cin >> age;
	cout << "Gender of the student : ";
	cin >> gender; 


	sfile << name << ", "
		  << roll_num << ", "
		  << age << ", "
		  << gender << " "
		  << endl;
}

void search()
{

	first = NULL;
	last = NULL;
	string student_name;

	ifstream file("student_profile.txt");


	string name;
	string roll_num;
	string age;
	string gender;

	while (file.good()) 
	{
		getline(file, name, ',');
		getline(file, roll_num, ',');
		getline(file, age, ',');
		getline(file, gender, '\n');

		point = new struct student;
		point->next = NULL;
		point->name = name;
		point->roll_num = roll_num;
		point->age = age;
		point->gender = gender;

		if (first == NULL)
		{
			first = point;
			last = point;
		}
		else
		{
			last->next = point;
			last = point;
		}
	}
    cout << endl;
	cout << "Enter the name of the student you want to search : ";
	cin >> student_name;

	struct student *temp;
	temp = first;

	do
	{
		if (temp->name == student_name)
		{
			cout << temp->name << temp->roll_num << temp->age << temp->gender << endl;
			break;
		} 
	
		
		temp = temp->next;
	} while (!(temp->next == 0));

   
	file.close();
}

int main()
{
	fstream sfile;

	sfile.open("student_profile.txt", ios::out | ios::app);
	int n;
	while (n != 4)
	{
		cout<<"\nData of student :\n 1. insert data of student \n 2. Find the student \n 3. Exit\n";
		cin>>n;
		switch(n)
		{
            case 1:
                insert();
                break;
            case 2:
                search();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout<<"Invalid input";
                break;
		}
	}

	return 0;
}

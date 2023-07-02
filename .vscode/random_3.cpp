#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lli long long int

void detail();
void insert_data_of_students();
void search_student();

struct student
{
    string name;
    string roll_number;
    string age;
    string gender;
    struct student *link;
};

struct student *first, *last, *profile_data;

void insert_data_of_students()
{
    fstream sfile;

    sfile.open("student_data.txt", ios::out | ios::app);

    cout << "Enter the details of student :" << endl;

    string name, roll_number, age, gender;

    cout << "Name of the student (don't use space between words) : ";
    cin >> name;
    cout << "Roll number of the student : ";
    cin >> roll_number;
    cout << "Age of the student : ";
    cin >> age;
    cout << "Gender of the student : ";
    cin >> gender;

    sfile << name << ", "
          << roll_number << ", "
          << age << ", "
          << gender << " "
          << endl;
}

void search_student()
{

    first = NULL;
    last = NULL;
    string roll;

    ifstream file("student_data.txt");

    string name;
    string roll_number;
    string age;
    string gender;

    while (file.good())
    {
        getline(file, name, ',');
        getline(file, roll_number, ',');
        getline(file, age, ',');
        getline(file, gender, '\n');

        profile_data = new struct student;
        profile_data->link = NULL;
        profile_data->name = name;
        profile_data->roll_number = roll_number;
        profile_data->age = age;
        profile_data->gender = gender;

        if (first == NULL)
        {
            first = profile_data;
            last = profile_data;
        }
        else
        {
            last->link = profile_data;
            last = profile_data;
        }
    }
    cout << endl;
    cout << "Enter roll_number number you want to search: ";
    cout << endl;
    cin >> roll;

    struct student *temp;
    temp = first;

    do
    {
        if (temp->roll_number == roll)
        {
            cout << temp->name << temp->roll_number << temp->age << temp->gender << "\n";
            break;
        }

        temp = temp->link;
    } while (!(temp->link == 0));

    file.close();
}

int main()
{

    fstream sfile;
    sfile.open("student_data.txt", ios::out | ios::app);
    int n;
    while(n != 4)
    {
        cout << "\nData of students :\n 1. insert data of students \n 2. search the student\n 3. Exit\n";
        cin >> n;
        switch (n)
        {
            case 1:
                insert_data_of_students();
                break;
            case 2:
                search_student();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Invalid input";
                break;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lli long long int

struct student
{
    string name_of_the_student; //takes name of the student
    string roll_number_of_the_student; //takes roll number of the student
    string age_of_the_student; // takes age of the student
    string gender_of_the_student; // takes gender of the student
    struct student *next;
};

struct student *first, *last, *point; // pointers of the structure

void insert_student_data()
{
    fstream sfile;

    sfile.open("student_data.txt", ios::out | ios::app);

    cout << "Enter the details of student :" << endl;

    string name_of_the_student, roll_number_of_the_student, age_of_the_student, gender_of_the_student;

    cout << "Name of the student (don't use space between words) : ";
    cin >> name_of_the_student;
    cout << "Roll number of the student : ";
    cin >> roll_number_of_the_student;
    cout << "Age of the student : ";
    cin >> age_of_the_student;
    cout << "Gender of the student : ";
    cin >> gender_of_the_student;

    sfile << name_of_the_student << ", "
          << roll_number_of_the_student << ", "
          << age_of_the_student << ", "
          << gender_of_the_student << " "
          << endl;
}

void search_student()
{

    first = NULL;
    last = NULL;
    string name_of_student;

    ifstream file("student_data.txt");

    string name_of_the_student;
    string roll_number_of_the_student;
    string age_of_the_student;
    string gender_of_the_student;

    while (file.good())
    {
        getline(file, name_of_the_student, ',');
        getline(file, roll_number_of_the_student, ',');
        getline(file, age_of_the_student, ',');
        getline(file, gender_of_the_student, '\n');

        point = new struct student;
        point->next = NULL;
        point->name_of_the_student = name_of_the_student;
        point->roll_number_of_the_student = roll_number_of_the_student;
        point->age_of_the_student = age_of_the_student;
        point->gender_of_the_student = gender_of_the_student;

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
    cout << "Enter the name of the student you want to search: ";
    cin >> name_of_student;

    struct student *temp;
    temp = first;

    do
    {
        if (temp->name_of_the_student == name_of_student)
        {
            cout << "Here is the data of the student you want to search : " << endl;
            cout << "Name of the student : ";
            cout << temp->name_of_the_student << endl;
            cout << "Roll number of the student : ";
            cout <<  temp->roll_number_of_the_student << endl;
            cout << "Age of the student : ";
            cout << temp->age_of_the_student << endl;
            cout << "Gender of the student : ";
            cout << temp->gender_of_the_student << endl;
            break;
        }

        temp = temp->next;
    } while (!(temp->next == 0));

    file.close();
}

int main()
{

    fstream sfile;
    sfile.open("student_data.txt", ios::out | ios::app);
    int n;
    while(n != 4)
    {
        cout << "\n Data of students :\n 1. insert data of student \n 2. search the student\n 3. Exit\n";
        cin >> n;
        switch (n)
        {
            case 1:
                insert_student_data();
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
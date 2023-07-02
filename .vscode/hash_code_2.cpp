#include <bits/stdc++.h>
using namespace std;

struct Contri
{
    string name;
    int tSkills;
    vector<string> skills;
    vector<int> skillLvl;
};

int main()
{
    int contributors, projects, c_temp;
    vector<struct Contri *> con;
    cin >> contributors >> projects;
    c_temp = contributors;
    while (c_temp--)
    {
        int lvl;
        string skill;
        struct Contri *temp = new Contri;
        cin >> temp->name >> temp->tSkills;
        int t = temp->tSkills;
        while (t--)
        {
            cin >> skill >> lvl;
            temp->skills.push_back(skill);
            temp->skillLvl.push_back(lvl);
        }
        con.push_back(temp);
    }
}
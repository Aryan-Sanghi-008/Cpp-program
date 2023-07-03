class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        if (s.length() != goal.length())
        {
            return false;
        }

        if (s == goal)
        {
            vector<int> count(26, 0);

            for (int i = 0; i < s.length(); i++)
            {
                int c = s[i] - 'a';
                count[c]++;
                if (count[c] == 2)
                {
                    return true;
                }
            }

            return false;
        }

        int x = -1;
        int y = -1;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != goal[i])
            {
                if (x == -1)
                {
                    x = i;
                }
                else if (y == -1)
                {
                    y = i;
                }
                else
                {
                    return false;
                }
            }
        }

        if (y == -1)
        {
            return false;
        }
            swap(s[x], s[y]);
            return s == goal;
    }
};
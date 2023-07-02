//abstract base class -> the base class solely used to create derived classes and have at least one pure virtual function
#include <bits/stdc++.h>
using namespace std;
class CWH
{
    protected :
        string title;
        float rating;
    public :
        CWH(string s, float r)
        {
            title = s;
            rating = r;
        }
        virtual void display() = 0; //do nothing function --> pure virtual function
};

class CWHVideo : public CWH
{
    float videolength;
    public :
        CWHVideo(string s, float r, float vlen) : CWH(s, r)
        {
            videolength = vlen;
        }
        void display()
        {
            cout << "This is an amazing video with title " << title << endl;
            cout << "Ratings : " << rating << " out of 5 stars" << endl;
            cout << "Length of the video is : " << videolength <<  " mins" << endl;
        }
};

class CWHText : public CWH
{
    int words;
    public :
        CWHText(string s, float r, int w) : CWH(s, r)
        {
            words = w;
        }
        void display()
        {
            cout << "This is an amazing text tutorial with title " << title << endl;
            cout << "Ratings : " << rating << " out of 5 stars" << endl;
            cout << "Length of the article is : " << words << endl;
        }
};

int main ()
{
    string title;
    float rating, vlen;
    int words;

    title = "django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    title = "django tutorial text";
    rating = 4.18;
    words = 400;
    
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
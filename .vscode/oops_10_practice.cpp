#include <iostream>
#include <math.h>
using namespace std;
class point
{
private:
    int x;
    int y;

    public:
        point(int a, int b)
        {
            x = a;
            y = b;
        }
        friend void distance(point, point);
        friend void display_distance();
        void display(void)
        {
            cout << "The point is (" << x << "," << y << ")" << endl;
        }
};
void distance(point p1, point p2)
{
    float distance = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    cout << "The distance between two points are : " << distance << endl;
}
int main()
{
    point p(5, 7);
    point q = point(2, 3);
    p.display();
    q.display();
    distance(p, q);
    return 0;
}
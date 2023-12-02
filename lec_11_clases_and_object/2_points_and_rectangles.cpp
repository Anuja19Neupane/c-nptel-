#include <iostream>
using namespace std;

class Point // class point
{
public:
    int x, y;
};

class Rect  // rect uses point
{
public:
    Point TL;
    Point BR;
};

int main()
{
    Rect r = {{0, 2},
              {5, 7}};
    cout << "[( " << r.TL.x << " " << r.TL.y << " ) ( " << r.BR.x << " " << r.BR.y << " )]" << endl;
}
// member functions are the functions inside class.
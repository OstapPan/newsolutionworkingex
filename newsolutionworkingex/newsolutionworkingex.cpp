
#include <iostream>
#include <vector>
using namespace std;
class point {
    int x, y;
public:
    point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    point() {
        x = y = 0;
    }
};
class figura {
    vector<point> vectors;
    
};
int main()
{
    std::cout << "Hello World!\n";
}

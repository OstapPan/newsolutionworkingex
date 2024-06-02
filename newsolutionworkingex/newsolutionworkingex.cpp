
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
    void print()const {
        cout << "X:" << x << "Y:" << y;
    }
};
class figura {
    vector<point> vectors;
public:
    figura(vector<point> vectors) {
        this->vectors = vectors;
    }
    figura() {
        this->vectors = { point(0,0) };
    }
     void print() {
        for (int i = 0; i < vectors.size(); i++)
        {
            vectors[i].print();
        }
    }
};  
class cvadrat : public figura  {
public:
    cvadrat() : figura(){}
    cvadrat(vector<point> vectors) : figura(vectors){}
   
};
class triengle : public figura {
public:
    triengle() :  figura() {}
    triengle(vector<point> vectors) : figura(vectors) {}
   
};
class trapesia :public  figura {
public:
    trapesia() : figura() {}
    trapesia(vector<point> vectors) : figura(vectors) {}
    
};
class pramokutnic : public figura {
public:
    pramokutnic() : figura() {}
    pramokutnic(vector<point> vectors) : figura(vectors) {}
   
};
int main()
{
    cvadrat cv({ point(12, 3),        point(17, 3), point(12, -2), point(17, -2) });
    triengle tr({  point(17, 3), point(12, -43), point(12, -3) });
    pramokutnic pr({ point(22, 3),        point(27, 3), point(22, -4), point(27, -17) });
    trapesia trap({ point(12, 3),        point(17, 3), point(12, -43), point(12, -3) });
    
}

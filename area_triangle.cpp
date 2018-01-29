#include <iostream>
using namespace std;

class ATriangle
{
      int x,y;

  public:
          ATriangle(double,double);

            double area()
            {
                return ((x * y)/2);
            }
};

ATriangle::ATriangle (double a, double b)
{
    x = a;
    y = b;
}

main(void)
{
    int i;

    ATriangle triangle(3,4);
    for(i=0;i<100;i++)
    {
        system("cls");
        cout <<i+1 << " percent completed ...."<<endl;
    }
    system("cls");
    cout << "Triangle area : " << triangle.area() << endl;

    return 0;
}

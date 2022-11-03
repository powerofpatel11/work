 

 
 #include <iostream>
using namespace std;
class matrix
{
    int a[5];
    int i;

public:
    void setdata()
    {
        cout << "enter a matrix =" << endl;
        for (i = 0; i <= 4; i++)

        {
            cin >> a[i];
        }
    }
    void display()
    {
        for (i = 0; i <= 4; i++)
        {
            cout << "a[" << i << "]=" << a[i] << endl;
        }
    }
    matrix operator+(matrix a2)
    {
        cout << "addition \n";
        matrix temp;
        for (i = 0; i <= 4; i++)
        {
            temp.a[i] = a[i] + a2.a[i];


        }
        return temp;
    }
};

int main()
{
    matrix a1;
    a1.setdata();
    matrix a2;
    a2.setdata();
    matrix a3 = a1 + a2;
    a3.display();

    return 0;
}
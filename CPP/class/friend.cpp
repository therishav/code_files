#include<iostream>
using namespace std;

class Complex {
    private:
        int a, b;

    public:
        void setData(int x, int y)
        { a=x; b=y;}

        void showData() {
            cout << a << " "<< b << endl;
        }

        Complex operator+(Complex c) {

            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }

        friend ostream& operator<<(ostream&, Complex);
        friend istream& operator>>(istream&, Complex&);
};

ostream& operator<<(ostream &dout, Complex C) {

    cout << "a= " << C.a << " b= " << C.b;

    return dout;
}

istream& operator>>(istream &din, Complex &C) {
    cin >> C.a >> C.b;

    return din;
}
int main(void) {
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1+(c2);
    // c3.showData();

    cout << c1; //operator<<(cout, c1);
}

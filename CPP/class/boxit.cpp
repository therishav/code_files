class Box {
//l,b,h are integers representing the dimensions of the box
private:
    int l, b, h;

// The class should have the following functions :
public:
// Constructors:
// Box();
    Box() {
        l=0; b=0; h=0;
    }
// Box(int,int,int);
    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
// Box(Box);
    Box(Box &X) {
        l = X.l;
        b = X.b;
        h = X.h;
    }

// int getLength(); // Return box's length
    int getLength() {
        return l;
    }
// int getBreadth (); // Return box's breadth
    int getBreadth() {
        return b;
    }
// int getHeight ();  //Return box's height
    int getHeight() {
        return h;
    }
// long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume() {
        return l*b*h;
    }
//Overload operator < as specified
    bool operator<(Box A, Box B) {
        if (A.l < B.l)
            return true;

        else if ((A.l == B.l) && (A.b < B.b))
            return true;

        else if ((A.l == B.l) && (A.b == B.b) && (A.h < B.h))
            return true;

        else
            return false;
    }
//bool operator<(Box& b)
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
    ostream& operator<<(ostream& dout, Box B) {

        cout << B.l << " " << B.b << " " << B.h;
        return dout;
    }

};

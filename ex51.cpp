//Daniel A Sanchez
//3/13/22
//S01368279

#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

class AltMoney {

    //Private Variables 
private:
    int dollars;
    int cents;

    //Public friend functions and constructor
public:
    AltMoney();
    friend istream& operator >>(istream& ins, AltMoney& m);
    friend AltMoney operator +(AltMoney m1, AltMoney m2);
    friend ostream& operator <<(ofstream& ous, AltMoney m);
};

//overload insertion , extraction and file functions
istream& operator>>(istream& ins, AltMoney& m);
void get_streams(ifstream& ins, ofstream& ous);
ostream& operator<<(ofstream& ous, AltMoney m);

//Main
int main() {

    ifstream ins; //creating ifstream object
    ofstream ous; //creating ofstream object
    AltMoney m1, m2, sum; //creating AltMoney objects

    get_streams(ins, ous); //giving get_streans function parameters ins and ous

    ins >> m1; //using extraction operator we get m1 data
    ous << "The first money is: "; //output string to the file 
    ous << m1; //print the amount 

    ins >> m2;
    ous << "The second money is:";
    ous << m2;

    sum = (m1 + m2); //object sum saves the value of the sum of m1 and m2
    ous << "The sum is: "; //output string to the file 
    ous << sum; //output the sum of m1 and m2 to the file

    //close file
    ins.close();
    ous.close();

    return 0;
}


//constructor
AltMoney::AltMoney() {

}


//overloading operator +
AltMoney operator +(AltMoney m1, AltMoney m2) {

    AltMoney temp;
    int extra = 0;
    temp.cents = m1.cents + m2.cents;
    if (temp.cents >= 100)
    {
        temp.cents = temp.cents - 100;
        extra = 1;
    }
    temp.dollars = m1.dollars + m2.dollars + extra;

    return temp;
}


// overloading insertion operator using ostream
ostream& operator <<(ofstream& ous, AltMoney m) {
    ous << "$" << m.dollars << ".";
    if (m.cents <= 9)
        ous << "0";  //to display a 0 on the left for numbers less than 10
    ous << m.cents << endl;
    return ous;
}


//overloading extraction operator using istream
istream& operator >>(istream& ins, AltMoney& m) {
    int d, c;
    ins >> d;
    ins >> c;
    if (d < 0 || c < 0)
    {
        cout << "Invalid dollars and cents, negative values\n";
        exit(1);
    }
    m.dollars = d;
    m.cents = c;
    return ins;
}


//file function
void get_streams(ifstream& ins, ofstream& ous) {
    ins.open("in_file.dat");
    if (ins.fail())
    {
        cout << "Failed to open the input file. \n";
        exit(1);
    }

    ous.open("out_file.dat");
    if (ous.fail())
    {
        cout << "Failed to open the output file. \n";
        exit(1);
    }
}


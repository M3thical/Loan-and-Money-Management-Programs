//Daniel A Sanchez
//S01368279
//This program checks if the two loans are the same

#include<iostream>
using namespace std;

class ID {

public:

    //Public functions
    ID();
    ID(int, int, int);
    void display();
    bool operator== (const ID& id) const; //declaring Overloading operator == prototype

private:

    //Private Variables
    int left;
    int middle;
    int right;

};

class Loan { // Loan is called structure tag

public:
    //Public functions
    Loan();
    Loan(ID id, float amount, float rate, int term);
    void set();
    float payment();
    void display();
    bool operator==(const Loan& loan) const;

private:
    //Private Variables
    ID id; // assume an unique integer between 1111-9999
    float amount; // $ amount of the loan
    float rate; // annual interest rate
    int term; // number of months, length of the loan

};

//Main
int main() {

    Loan loan1(ID(111, 22, 4444), 2300, 5.5, 48); // initialize to values given
    Loan loan2; //declaring object loan2 from class loan



    cout << "Display loan1 \n";
    loan1.display(); //displaying the values from the initialize constructor

    loan2.set(); // set the values
    cout << '\n'; //blank space
    cout << "Display loan2 \n";
    loan2.display(); //displaying the values of object loan2


    //if statement checks if loan1 is equal to loan2
    if (loan1 == loan2) {
        cout << "Both loans are equal " << endl;
    }

    else {
        cout << "Loans are not equal " << endl;
    }

    return 0;

}

//default constructor
ID::ID() {

    // use default values
}

//initialize constructor 
ID::ID(int l, int m, int r) {

    left = l;
    middle = m;
    right = r;

}

//function display the left , middle and right numbers
void ID::display() {
    cout << left << "-" << middle << "-" << right << endl;
}

//default constructor
Loan::Loan() {

}

//initialize constructor
Loan::Loan(ID I, float am, float rt, int trm) {
    id = I;
    amount = am;
    rate = rt;
    term = trm;
}

//function initialize the values for each variables by asking the user 
void Loan::set() {

    int l, m, r;

    cout << "Enter the left part of the loan ID \n";
    cin >> l;
    cout << "Enter the middle part of the loan ID \n";
    cin >> m;
    cout << "Enter the right part of the loan ID \n";
    cin >> r;
    id = ID(l, m, r);
    cout << "Enter the amount of this loan \n";
    cin >> amount;
    cout << "Enter the annual interest rate of this loan (in %) \n";
    cin >> rate;
    cout << "Enter the term (number of months, length of the loan) \n";
    cin >> term;

}

//function display the amount , rate and term
void Loan::display() {

    id.display();
    cout << amount << endl;
    cout << rate << endl;
    cout << term << endl;
}

//overloading == operator from class ID using scope resolution
bool ID::operator== (const ID& id) const {

    return ((right == id.right) && (left == id.left) && (middle == id.middle));

}

//overloading == operator from class Loan using scope resolution
bool Loan::operator== (const Loan& loan) const {

    return ((amount == loan.amount) && (rate == loan.rate) && (term == loan.term) && (id == loan.id));

} 
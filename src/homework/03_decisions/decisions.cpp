//write include statement for decisions header
#include "decisions.h"

using std::string;

//Write code for function(s) code here
string get_letter_grade_using_if (int grade){
    if (grade > 89){
        return "A";
    }
    else if (grade > 79){
        return "B";
    }
    else if (grade > 69){
        return "C";
    }
    else if (grade > 59){
        return "D";
    }
    else if (grade >= 0){
        return "F";
    }
}

string get_letter_grade_using_switch (int grade){
    switch (grade){
        case 90 ... 100:
            return "A";
        case 80 ... 89:
            return "B";
        case 70 ... 79:
            return "C";
        case 60 ... 69:
            return "D";
        case 0 ... 59:
            return "F";
    }
}
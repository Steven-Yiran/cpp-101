#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello " << name << "!" << endl;

    // ask for the median
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;
    
    // ask for homework grades
    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";
    
    vector<double> homework;
    double x;
    while (cin >> x)
        homework.push_back(x);
    
    // check that the student entered at least one grade
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();

    sort(homework.begin(), homework.end());
    vec_sz mid = size / 2;
    double median;
    median = (size % 2 == 0) ? (homework[mid] + homework[mid - 1]) / 2
             : homework[mid];

    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3) 
         << 0.2 * midterm + 0.4 * final + 0.4 * median
         << setprecision(prec) << endl;
    return 0;    
}
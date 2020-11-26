#include<iostream>
#include<string>

using namespace std;

int main(void) {
    string st = "This is my first string";
    cout << "The new string is "
         << st
         << " and the size = "
         << st.size()
         << endl;

    string st1(st);
    cout << "st1 = " << st1 << endl;

    string st2;
    st2 = st1;
    cout << "st2 = " << st2 << endl;
   for(int i = 0; i<st.size(); i++) {
        cout << "character: " << st[i] << endl;
    }

    if(st == st2) {
        cout << "Same strings ";
    } else {
        cout << "unequal strings";
    }

    if(st.empty()) {
        cout << "String is empty";
    } else {
        cout << "\nNon-emptry";
    }

    string st4 = st + st1;
    cout << "st4 " << st4 << endl;
    st += st4;
    cout << "st = " << st << endl;

    string s1;
    const char *pc = "A character Array";
    s1 = pc;
    cout << "st = " << s1 << endl;

    const char *str = s1.c_str();
    cout << "str = " << str << endl;
}

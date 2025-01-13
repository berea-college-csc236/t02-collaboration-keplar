/*  T02: Collaboration Teamwork

    Have yov ever heard of rubber duck debugging?
    See https://en.wikipedia.org/wiki/Rubber_duck_debugging 
    Original code and ASCII art by Dr. Jan Pearce, Berea College

    Edits made by:
    Eber Seco Lima
 */
#include <iostream>
using namespace std;

int main() {

    int ducknum;

    cout << " Have you ever hver heard of rubber duck debugging?" << endl;
    cout  << " If not, see See https://en.wikipedia.org/wiki/Rubber_duck_debugging.\n" << endl;
    cout << " How many rubber ducks do you want to see? ";
    cin >> ducknum;

    for (int i = 0; i < ducknum; i++) {
        
        cout << "  ____________________________________ " << endl;
		cout << " |\\                                    \\ " << endl;
		cout << " | \\                                    \\ " << endl;
		cout << " |  \\____________________________________\\ " << endl;
		cout << " |  |       __---_ _---__                | " << endl;
		cout << " |  |      |======|=====|                | " << endl;
		cout << " |  |      |======|=====|                | " << endl;
		cout << " |  |  ____|__---_|_---_|______________  | " << endl;
		cout << " |  | |                                | | " << endl;
		cout << " |   \\ \\                                \\ \\ " << endl;
		cout << " |  \\ ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\| |" << endl;
		cout << " |  |\\  ,--------------------------------  | " << endl;
		cout << " |  ||| |                               || | " << endl;
		cout << "  \\ ||| |           -  -                || | " << endl;
		cout << "   \\'|| |-----------\\-\\---------------|| | " << endl;
		cout << "     \\|_|            "  "               \\|_| " << endl;

    }

    return 0;
}
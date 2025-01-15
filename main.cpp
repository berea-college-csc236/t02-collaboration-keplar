/*  T02: Collaboration Teamwork

	Have yov ever heard of rubber duck debugging?
	See https://en.wikipedia.org/wiki/Rubber_duck_debugging
	Original code and ASCII art by Dr. Jan Pearce, Berea College


 */
#include <iostream>
using namespace std;

int main() {

	int ducknum;

	cout << " Have you ever hver heard of rubber duck debugging?" << endl;
	cout << " If not, see See https://en.wikipedia.org/wiki/Rubber_duck_debugging.\n" << endl;
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

    for (int i = 0; i < ducknum; i++) { 
        cout << "                __     " << endl; // TODO: student 1 may change this line and may add additional lines immediately above
        cout << "              <(o )___-" << endl; // student 3(1) may change this line and add additional lines between this line and immediately below
        cout << "               ( .__> /" << endl; // student 3(2) may change this line
		cout << "           _____________________________________ " << endl;
		cout << "         //_________________(o)_________________\\ " << endl;
		cout << endl;
		cout << "         ||                                     || " << endl;
		cout << "         || > Welcome to CSC 236!               || " << endl;
		cout << "            > We're happy you are here" << endl;
		cout << "         || > and hope you enjoy the course!    || " << endl;
		cout << "            >  - Your Prof and the TAs" << endl;
		cout << "         ||                                     || " << endl;
		cout << endl;
		cout << "         ||_____________________________________|| " << endl;
		cout << "        /_______________________________________ \\ " << endl;
		cout << "       /_| _| _| _| _| _| _| _| _| _| _| _| _| _| \\ " << endl;
		cout << "      /____| _| _| _| _| _| _| _| _| _| _| _| ___| \\ " << endl;
		cout << "     /___| _| _| _| _| _| _| _| _| _| _| _| _| ___| \\ " << endl;
		cout << "    /__| _| _| _| _| _| _| _| _| _| _| _| _| _| ___  \\ " << endl;
		cout << "   /_| _| _| _| _|______________________|  _| _|_|_|  \\ " << endl;
		cout << "  /________________/                  \\________________\\ " << endl;
		cout << " (________________/____________________\\_______________) " << endl;
    }


	return 0;
}
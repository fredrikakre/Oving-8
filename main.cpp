#include "std_lib_facilities.h"
#include "Car.h"
#include "Meeting.h"
#include "Graph.h"
#include "Simple_window.h"
#include "MeetingWindow.h"

int main() {
	Point xy{ 100, 100 }; int width = x_max() - 100; int height = y_max() - 100; string title = "Heisann hoppsann";
	MeetingWindow ProgramWindow(xy, width, height, title);
	gui_main();

	//Car* bil = new Car(1);

	/*Car bil(0);
	Person dude("Per", "per@test.no", &bil); Person* lead = &dude; Person dude2("Paal", "per@test.no2", &bil); Person* lead2 = &dude2; Person dude3("Paal 2", "per@test.no2", &bil); Person* lead3 = &dude3;
	cout << dude;
	//Campus hei = Campus::Dragvoll;
	Meeting Mote_1 = Meeting(1, 2, Campus::Glos, "Tekled", lead);
	Meeting Mote_2 = Meeting(3, 4, Campus::Dragvoll, "Tekled2", lead2);
	Mote_1.addParticipant(lead2); Mote_1.addParticipant(lead3);
	ostream& os();
//	cout << Mote_1.getParticipantList();
	//Mote_1.operator<<(os);
	//cout << Mote_1;

	//cout << Mote_1;
	/*vector<string> Mote123 = Mote_1.getParticipantList();
	//Mote_2.getParticipantList();
	for(int i = 0; i < Mote123.size(); ++i)	{
		cout << i << ": " << Mote123[i] << endl;
	}*/
	// Your code here*/
	return 0;
}


/* Pointers
int* p = &x;			Setter pointer p til � peke p� addressen til verdien x.
cout << p;				Printer adressen
							& Kalles adreess of - operator

*p refererer til verdien som er lagret i adressen p peker p�.
S� om x = 3
int* p = &x
s� vil cout << *p; printer "3".     * kalles dereference operator

&*p printer bare adressen. (kansellerer hverandre)

*/
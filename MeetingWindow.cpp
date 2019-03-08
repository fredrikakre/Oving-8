#include "Car.h"
#include "Meeting.h"
#include "Simple_window.h"
#include "Graph.h"
#include "MeetingWindow.h"
using namespace Graph_lib;

MeetingWindow::MeetingWindow(Point xy, int w, int h, const string& title)
	: Window(xy, w, h, title),
	quitBtn(Point{ fieldPad + fieldW + 100, pad }, btnW, btnH, "Quit", cb_quit),
	personName(Point{ fieldPad, pad }, fieldW, fieldH, "Name"),
	personEmail(Point{ fieldPad, pad + pad + fieldH }, fieldW, fieldH, "Email"),
	personNewBtn(Point{ fieldPad, pad + pad + pad + fieldH + fieldH }, btnW, btnH, "Add", cb_new_person) {
	attach(quitBtn);
	attach(personName);
	attach(personEmail);
	attach(personNewBtn);
}


void MeetingWindow::cb_quit(Address, Address pw) {
	reference_to<MeetingWindow>(pw).hide();
}
void MeetingWindow::cb_new_person(Address, Address pw) {
	reference_to<MeetingWindow>(pw).addPerson();
}

void MeetingWindow::addPerson() {
	people.push_back(new Person{ personName.get_string(), personEmail.get_string(), nullptr });
}

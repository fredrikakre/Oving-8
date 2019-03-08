#pragma once
#include "Car.h"
#include "Meeting.h"
#include "Simple_window.h"
#include "Graph.h"
using namespace Graph_lib;


static constexpr int pad = 30;
static constexpr int btnW = 50;
static constexpr int btnH = 50;
static constexpr int fieldW = 130;
static constexpr int fieldH = 35;
static constexpr int fieldPad = 50;


class MeetingWindow : public Window {
	Button quitBtn;
	Button personNewBtn;
	In_box personName;
	In_box personEmail;
	Vector_ref<Person> people;

public:
	MeetingWindow(Point xy, int w, int h, const string& title);
	static void cb_quit(Address, Address pw);
	static void cb_new_person(Address, Address pw);
	void addPerson();
};


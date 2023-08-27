#include <gui/screen6_screen/Screen6View.hpp>

extern uint32_t f;
extern int PreStartMatch;

Screen6View::Screen6View()
{

}

void Screen6View::setupScreen()
{
    Screen6ViewBase::setupScreen();
}

void Screen6View::tearDownScreen()
{
    Screen6ViewBase::tearDownScreen();
}
void Screen6View::handleTickEvent(){
	if(f==1)
		application().gotoScreen7ScreenWipeTransitionNorth();
}

void Screen6View::PreStart(){
	PreStartMatch=1;
}

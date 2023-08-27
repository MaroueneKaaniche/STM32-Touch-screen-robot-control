#include <gui/screen4_screen/Screen4View.hpp>
extern int Side,sendSide;
Screen4View::Screen4View()
{

}

void Screen4View::setupScreen()
{
    Screen4ViewBase::setupScreen();
}

void Screen4View::tearDownScreen()
{
    Screen4ViewBase::tearDownScreen();
}
void Screen4View::SetYellow(){
	sendSide=1;
	Side=1;
}
void Screen4View::SetViolet(){
	sendSide=1;
	Side=2;
}

#include <gui/screen5_screen/Screen5View.hpp>
extern int sendStrategy,Strategy;
Screen5View::Screen5View()
{

}

void Screen5View::setupScreen()
{
    Screen5ViewBase::setupScreen();
}

void Screen5View::tearDownScreen()
{
    Screen5ViewBase::tearDownScreen();
}

void Screen5View::ChooseS1(){
	sendStrategy=1;
	Strategy=1;
}
void Screen5View::ChooseS2(){
	sendStrategy=1;
	Strategy=2;
}
void Screen5View::ChooseS3(){
	sendStrategy=1;
	Strategy=3;
}
void Screen5View::ChooseS4(){
	sendStrategy=1;
	Strategy=4;
}


#include <gui/screen5_1_screen/Screen5_1View.hpp>

extern uint32_t j,h;

extern int PreGetStrategy,PreGetSide;
Screen5_1View::Screen5_1View()
{

}

void Screen5_1View::setupScreen()
{
    Screen5_1ViewBase::setupScreen();
}

void Screen5_1View::tearDownScreen()
{
    Screen5_1ViewBase::tearDownScreen();
}
void Screen5_1View::handleTickEvent(){
	Unicode::snprintf(StartegyNumberBuffer, STARTEGYNUMBER_SIZE, "%u",h);
	StartegyNumber.invalidate();
//	Unicode::snprintf(SideTextBuffer, SIDETEXT_SIZE, "%u",j);
//	SideText.invalidate();

	if(j==2)
	{
		Unicode::snprintf(SideTextBuffer, SIDETEXT_SIZE, "violet");
		SideText.invalidate();
	}
	else if (j==1)
	{
		Unicode::snprintf(SideTextBuffer, SIDETEXT_SIZE, "yellow");
		SideText.invalidate();
	}
	else
	{
		Unicode::snprintf(SideTextBuffer, SIDETEXT_SIZE, "empty");
		SideText.invalidate();
	}
}
void Screen5_1View::GetValues(){
	PreGetSide=1;
}
void Screen5_1View::SetTo0(){
	PreGetStrategy=0;
	PreGetSide=0;
}

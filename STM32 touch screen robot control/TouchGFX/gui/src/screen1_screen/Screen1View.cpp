#include <gui/screen1_screen/Screen1View.hpp>
extern int sendS,sendE,sendRW,sendLW;
extern int receiveLW,PreReceiveLW,receiveRW,PreReceiveRW,receiveE,PreReceiveE,receiveS,PreReceiveS,PreStartMatch;
extern int GetScore,PreGetScore;
extern uint32_t f;
extern int first_time_launch;
extern int TuningRK,TuningRS,TestingRS,TestingRK;
extern int val;
Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::Reset()
{
	val=0;
	TuningRK=0;
	TuningRS=0;
	TestingRS=0;
	TestingRK=0;
	if(first_time_launch==0){
		TuningRK=1;
		first_time_launch=1;
		PreReceiveLW=1;
		PreReceiveRW=1;
		PreReceiveE=1;
		PreReceiveS=1;
	}


}

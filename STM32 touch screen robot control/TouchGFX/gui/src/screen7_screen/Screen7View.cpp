#include <gui/screen7_screen/Screen7View.hpp>
extern int GetScore,PreGetScore;
extern int sendS,sendE,sendRW,sendLW;
extern int receiveLW,PreReceiveLW,receiveRW,PreReceiveRW,receiveE,PreReceiveE,receiveS,PreReceiveS,StartMatch,PreStartMatch;
extern uint32_t e,f;
Screen7View::Screen7View()
{

}

void Screen7View::setupScreen()
{
    Screen7ViewBase::setupScreen();
}

void Screen7View::tearDownScreen()
{
    Screen7ViewBase::tearDownScreen();
}
void Screen7View::ReceiveScore(){
	PreGetScore=1;
	sendE=0;
	sendS=0;
	sendRW=0;
	sendLW=0;
	receiveLW=0;
	PreReceiveLW=0;
	receiveRW=0;
	PreReceiveRW=0;
	receiveE=0;
	PreReceiveE=0;
	receiveS=0;
	PreReceiveS=0;
	PreStartMatch=0;
	f=0;
}

void Screen7View::ResetAndGo(){

	sendE=0;
	sendS=0;
	sendRW=0;
	sendLW=0;
	receiveLW=0;
	PreReceiveLW=0;
	receiveRW=0;
	PreReceiveRW=0;
	receiveE=0;
	PreReceiveE=0;
	receiveS=0;
	PreReceiveS=0;
	GetScore=0;
	PreGetScore=0;
	StartMatch=0;
	PreStartMatch=0;
	f=0;
	e=0;
	clock=100;
	frames=0;
	application().gotoScreen1ScreenWipeTransitionNorth();

}
void Screen7View::handleTickEvent(){
		frames++;
		if (frames==60)
		{	if(clock>0)
				clock--;
			Unicode::snprintf(valTimeBuffer, VALTIME_SIZE, "%u",clock);
			valTime.invalidate();
			frames=0;
		}

		//textProgress1.setValue(clock);

		Unicode::snprintf(valScoreBuffer, VALSCORE_SIZE, "%u",e);
		valScore.invalidate();
}



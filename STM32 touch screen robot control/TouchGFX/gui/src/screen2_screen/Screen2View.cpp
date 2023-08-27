#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

extern int sendE;
extern int sendD;
extern int sendS;
extern int sendRW;
extern int sendLW;
extern int TuningRS;
extern uint32_t val;
extern uint32_t a;
extern uint32_t b;
extern uint32_t c;
extern uint32_t d;
void Screen2View::p000001()
{	val=val+1;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::p00001()
{	val=val+10;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::p0001()
{	val=val+100;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::p001()
{	val=val+1000;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::p01()
{	val=val+10000;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::p1()
{	val=val+100000;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::p10()
{	val=val+1000000;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::p100()
{	val=val+10000000;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::m000001()
{	if(val>0)
		val=val-1;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::m00001()
{
	if(val>10)
		val=val-10;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::m0001()
{	if(val>100)
		val=val-100;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::m001()
{
	if(val>1000)
		val=val-1000;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::m01()
{	if(val>10000)
		val=val-10000;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::m1()
{	if(val>100000)
		val=val-100000;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::m10()
{	if(val>1000000)
		val=val-1000000;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2View::m100()
{	if(val>10000000)
		val=val-10000000;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void  Screen2View::ChangeE(){
	sendE=1;

}
void  Screen2View::ChangeRW(){
	sendRW=1;

}
void  Screen2View::ChangeLW(){
	sendLW=1;

}
void  Screen2View::ChangeS(){
	sendS=1;
}
void Screen2View::handleTickEvent(){
	 Unicode::snprintf(currentEABuffer, CURRENTEA_SIZE, "%u",a);
	 currentEA.invalidate();
//	 Unicode::snprintf(currentEA_1Buffer, CURRENTEA_1_SIZE, "%d",counter);
//	 currentEA_1.invalidate();
	 Unicode::snprintf(currentWSBuffer, CURRENTWS_SIZE, "%u",b);
	 currentWS.invalidate();
	 Unicode::snprintf(currentRWDBuffer, CURRENTRWD_SIZE, "%u",c);
	 currentRWD.invalidate();
	 Unicode::snprintf(currentLWDBuffer, CURRENTLWD_SIZE, "%u",d);
	 currentLWD.invalidate();
}
void Screen2View::SetTuningRobotSghir(){
	TuningRS=1;
}

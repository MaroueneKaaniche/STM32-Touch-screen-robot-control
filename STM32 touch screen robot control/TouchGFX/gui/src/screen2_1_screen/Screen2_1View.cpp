#include <gui/screen2_1_screen/Screen2_1View.hpp>

Screen2_1View::Screen2_1View()
{

}

void Screen2_1View::setupScreen()
{
    Screen2_1ViewBase::setupScreen();
}

void Screen2_1View::tearDownScreen()
{
    Screen2_1ViewBase::tearDownScreen();
}

extern int sendE;
extern int sendD;
extern int sendS;
extern int sendRW;
extern int sendLW;
extern int TuningRK;
extern uint32_t val;
extern uint32_t a1;
extern uint32_t b1;
extern uint32_t c1;
extern uint32_t d1;
void Screen2_1View::p000001()
{	val=val+1;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::p00001()
{	val=val+10;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::p0001()
{	val=val+100;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::p001()
{	val=val+1000;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::p01()
{	val=val+10000;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::p1()
{	val=val+100000;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::p10()
{	val=val+1000000;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::p100()
{	val=val+10000000;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::m000001()
{	if(val>0)
		val=val-1;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::m00001()
{
	if(val>10)
		val=val-10;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::m0001()
{	if(val>100)
		val=val-100;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::m001()
{
	if(val>1000)
		val=val-1000;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::m01()
{	if(val>10000)
		val=val-10000;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::m1()
{	if(val>100000)
		val=val-100000;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::m10()
{	if(val>1000000)
		val=val-1000000;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void Screen2_1View::m100()
{	if(val>10000000)
		val=val-10000000;
	else
		val=0;
	Unicode::snprintf(valeurBuffer, VALEUR_SIZE, "%u",val);
	valeur.invalidate();
}
void  Screen2_1View::ChangeE(){
	sendE=1;

}
void  Screen2_1View::ChangeRW(){
	sendRW=1;

}
void  Screen2_1View::ChangeLW(){
	sendLW=1;

}
void  Screen2_1View::ChangeS(){
	sendS=1;
}
void Screen2_1View::handleTickEvent(){
	 Unicode::snprintf(currentEABuffer, CURRENTEA_SIZE, "%u",a1);
	 currentEA.invalidate();
//	 Unicode::snprintf(currentEA_1Buffer, CURRENTEA_1_SIZE, "%d",counter);
//	 currentEA_1.invalidate();
	 Unicode::snprintf(currentWSBuffer, CURRENTWS_SIZE, "%u",b1);
	 currentWS.invalidate();
	 Unicode::snprintf(currentRWDBuffer, CURRENTRWD_SIZE, "%u",c1);
	 currentRWD.invalidate();
	 Unicode::snprintf(currentLWDBuffer, CURRENTLWD_SIZE, "%u",d1);
	 currentLWD.invalidate();
}
void Screen2_1View::SetTuningRobotKbir(){
	TuningRK=1;
}

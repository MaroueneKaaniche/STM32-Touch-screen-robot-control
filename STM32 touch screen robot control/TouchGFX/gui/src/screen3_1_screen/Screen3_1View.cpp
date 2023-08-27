#include <gui/screen3_1_screen/Screen3_1View.hpp>
extern uint32_t X,Y,N;
extern int sendXY,sendRotate;
extern int TestingRK;
Screen3_1View::Screen3_1View()
{

}

void Screen3_1View::setupScreen()
{
    Screen3_1ViewBase::setupScreen();
}

void Screen3_1View::tearDownScreen()
{
    Screen3_1ViewBase::tearDownScreen();
}

void Screen3_1View::Zid1R()
{
	N=N+1;
	Unicode::snprintf(valRotationBuffer, VALROTATION_SIZE, "%u",N);
	valRotation.invalidate();
}

void Screen3_1View::Nakass1R()
{	if(N>0)
		N=N-1;
	else
		N=0;
	Unicode::snprintf(valRotationBuffer, VALROTATION_SIZE, "%u",N);
	valRotation.invalidate();
}
void Screen3_1View::Zid1000_x()
{
	X=X+1000;
	Unicode::snprintf(valXBuffer, VALX_SIZE, "%u",X);
	valX.invalidate();
}
void Screen3_1View::Zid100_x()
{
	X=X+100;
	Unicode::snprintf(valXBuffer, VALX_SIZE, "%u",X);
	valX.invalidate();
}
void Screen3_1View::Zid10_x()
{
	X=X+10;
	Unicode::snprintf(valXBuffer, VALX_SIZE, "%u",X);
	valX.invalidate();
}
void Screen3_1View::Zid1_x()
{
	X=X+1;
	Unicode::snprintf(valXBuffer, VALX_SIZE, "%u",X);
	valX.invalidate();
}
void Screen3_1View::Nakass1000_x()
{	if(X>1000)
		X=X-1000;
	else
		X=0;
	Unicode::snprintf(valXBuffer, VALX_SIZE, "%u",X);
	valX.invalidate();
}
void Screen3_1View::Nakass100_x()
{	if(X>100)
		X=X-100;
	else
		X=0;
	Unicode::snprintf(valXBuffer, VALX_SIZE, "%u",X);
	valX.invalidate();
}
void Screen3_1View::Nakass10_x()
{	if(X>10)
		X=X-10;
	else
		X=0;
	Unicode::snprintf(valXBuffer, VALX_SIZE, "%u",X);
	valX.invalidate();
}
void Screen3_1View::Nakass1_x()
{	if(X>0)
		X=X-1;
	else
		X=0;
	Unicode::snprintf(valXBuffer, VALX_SIZE, "%u",X);
	valX.invalidate();
}
void Screen3_1View::Zid1000_y()
{
	Y=Y+1000;
	Unicode::snprintf(valYBuffer, VALY_SIZE, "%u",Y);
	valY.invalidate();
}
void Screen3_1View::Zid100_y()
{
	Y=Y+100;
	Unicode::snprintf(valYBuffer, VALY_SIZE, "%u",Y);
	valY.invalidate();
}
void Screen3_1View::Zid10_y()
{
	Y=Y+10;
	Unicode::snprintf(valYBuffer, VALY_SIZE, "%u",Y);
	valY.invalidate();
}
void Screen3_1View::Zid1_y()
{
	Y=Y+1;
	Unicode::snprintf(valYBuffer, VALY_SIZE, "%u",Y);
	valY.invalidate();
}
void Screen3_1View::Nakass1000_y()
{	if(Y>1000)
		Y=Y-1000;
	else
		Y=0;
	Unicode::snprintf(valYBuffer, VALY_SIZE, "%u",Y);
	valY.invalidate();
}

void Screen3_1View::Nakass100_y()
{	if(Y>100)
		Y=Y-100;
	else
		Y=0;
	Unicode::snprintf(valYBuffer, VALY_SIZE, "%u",Y);
	valY.invalidate();
}

void Screen3_1View::Nakass10_y()
{	if(Y>10)
		Y=Y-10;
	else
		Y=0;
	Unicode::snprintf(valYBuffer, VALY_SIZE, "%u",Y);
	valY.invalidate();
}
void Screen3_1View::Nakass1_y()
{	if(Y>0)
		Y=Y-1;
	else
		Y=0;
	Unicode::snprintf(valYBuffer, VALY_SIZE, "%u",Y);
	valY.invalidate();
}
void Screen3_1View::Go(){
	sendXY=1;
}
void Screen3_1View::Rotate(){
	sendRotate=1;
}
void Screen3_1View::SetTestingRobotKbir(){
	TestingRK=1;
}


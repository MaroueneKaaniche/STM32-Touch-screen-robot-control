/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen9_1_screen/Screen9_1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen9_1ViewBase::Screen9_1ViewBase() :
    flexButtonCallback(this, &Screen9_1ViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    scalableImage2.setPosition(0, 0, 480, 272);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage2);

    MotorRightContainer.setPosition(109, 43, 121, 50);
    RightMotorButton.setBoxWithBorderPosition(0, 0, 121, 50);
    RightMotorButton.setBorderSize(5);
    RightMotorButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    RightMotorButton.setAction(flexButtonCallback);
    RightMotorButton.setPosition(0, 0, 121, 50);
    MotorRightContainer.add(RightMotorButton);

    MotorRight.setXY(7, 17);
    MotorRight.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    MotorRight.setLinespacing(0);
    MotorRight.setTypedText(touchgfx::TypedText(T___SINGLEUSE_MGJP));
    MotorRightContainer.add(MotorRight);

    add(MotorRightContainer);

    MotorLefttContainer.setPosition(250, 43, 121, 50);
    LeftButton.setBoxWithBorderPosition(0, 0, 121, 50);
    LeftButton.setBorderSize(5);
    LeftButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    LeftButton.setAction(flexButtonCallback);
    LeftButton.setPosition(0, 0, 121, 50);
    MotorLefttContainer.add(LeftButton);

    MotorLeft.setXY(12, 17);
    MotorLeft.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    MotorLeft.setLinespacing(0);
    MotorLeft.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LK7M));
    MotorLefttContainer.add(MotorLeft);

    add(MotorLefttContainer);

    Arm1Container.setPosition(109, 98, 121, 50);
    Arm1Button.setBoxWithBorderPosition(0, 0, 121, 50);
    Arm1Button.setBorderSize(5);
    Arm1Button.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    Arm1Button.setAction(flexButtonCallback);
    Arm1Button.setPosition(0, 0, 121, 50);
    Arm1Container.add(Arm1Button);

    Arm1.setXY(28, 18);
    Arm1.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    Arm1.setLinespacing(0);
    Arm1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IJ78));
    Arm1Container.add(Arm1);

    add(Arm1Container);

    Arm2Container_2.setPosition(250, 98, 121, 50);
    Arm2Button.setBoxWithBorderPosition(0, 0, 121, 50);
    Arm2Button.setBorderSize(5);
    Arm2Button.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    Arm2Button.setAction(flexButtonCallback);
    Arm2Button.setPosition(0, 0, 121, 50);
    Arm2Container_2.add(Arm2Button);

    Arm2.setXY(30, 17);
    Arm2.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    Arm2.setLinespacing(0);
    Arm2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_2Q0Q));
    Arm2Container_2.add(Arm2);

    add(Arm2Container_2);

    Gilss1Container.setPosition(109, 153, 121, 50);
    Gliss1Button.setBoxWithBorderPosition(0, 0, 121, 50);
    Gliss1Button.setBorderSize(5);
    Gliss1Button.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    Gliss1Button.setAction(flexButtonCallback);
    Gliss1Button.setPosition(0, 0, 121, 50);
    Gilss1Container.add(Gliss1Button);

    Gliss1.setXY(25, 17);
    Gliss1.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    Gliss1.setLinespacing(0);
    Gliss1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_97MS));
    Gilss1Container.add(Gliss1);

    add(Gilss1Container);

    Gliss2Container.setPosition(250, 153, 121, 50);
    Gliss2Button.setBoxWithBorderPosition(0, 0, 121, 50);
    Gliss2Button.setBorderSize(5);
    Gliss2Button.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    Gliss2Button.setAction(flexButtonCallback);
    Gliss2Button.setPosition(0, 0, 121, 50);
    Gliss2Container.add(Gliss2Button);

    Gliss2.setXY(25, 17);
    Gliss2.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    Gliss2.setLinespacing(0);
    Gliss2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_QIG6));
    Gliss2Container.add(Gliss2);

    add(Gliss2Container);

    Pompe1Container.setPosition(109, 208, 121, 50);
    Pompe1Button.setBoxWithBorderPosition(0, 0, 121, 50);
    Pompe1Button.setBorderSize(5);
    Pompe1Button.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    Pompe1Button.setAction(flexButtonCallback);
    Pompe1Button.setPosition(0, 0, 121, 50);
    Pompe1Container.add(Pompe1Button);

    Pompe1.setXY(17, 17);
    Pompe1.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    Pompe1.setLinespacing(0);
    Pompe1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9TI6));
    Pompe1Container.add(Pompe1);

    add(Pompe1Container);

    Pompe2Container.setPosition(250, 208, 121, 50);
    Pompe2Button.setBoxWithBorderPosition(0, 0, 121, 50);
    Pompe2Button.setBorderSize(5);
    Pompe2Button.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    Pompe2Button.setAction(flexButtonCallback);
    Pompe2Button.setPosition(0, 0, 121, 50);
    Pompe2Container.add(Pompe2Button);

    Pompe2.setXY(17, 17);
    Pompe2.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    Pompe2.setLinespacing(0);
    Pompe2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_5S4T));
    Pompe2Container.add(Pompe2);

    add(Pompe2Container);

    BackCnt.setPosition(0, 0, 480, 43);
    BackButton.setBoxWithBorderPosition(0, 0, 480, 31);
    BackButton.setBorderSize(5);
    BackButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    BackButton.setAction(flexButtonCallback);
    BackButton.setPosition(0, 0, 480, 31);
    BackCnt.add(BackButton);

    Back.setPosition(0, 6, 480, 25);
    Back.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Back.setLinespacing(0);
    Back.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DQDK));
    BackCnt.add(Back);

    add(BackCnt);
}

Screen9_1ViewBase::~Screen9_1ViewBase()
{

}

void Screen9_1ViewBase::setupScreen()
{

}

void Screen9_1ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &BackButton)
    {
        //BackToDebug
        //When BackButton clicked change screen to Screen8
        //Go to Screen8 with screen transition towards East
        application().gotoScreen8ScreenWipeTransitionEast();
    }
    if (&src == &RightMotorButton)
    {
        //RightMotor
        //When RightMotorButton clicked call virtual function
        //Call RightMotor
        RightMotor();
    }
    if (&src == &LeftButton)
    {
        //LeftMotor
        //When LeftButton clicked call virtual function
        //Call LeftMotor
        LeftMotor();
    }
    if (&src == &Arm1Button)
    {
        //Arm1
        //When Arm1Button clicked call virtual function
        //Call Arm1Debug
        Arm1Debug();
    }
    if (&src == &Arm2Button)
    {
        //Arm2
        //When Arm2Button clicked call virtual function
        //Call Arm2Debug
        Arm2Debug();
    }
    if (&src == &Gliss1Button)
    {
        //Gliss1
        //When Gliss1Button clicked call virtual function
        //Call Gliss1Debug
        Gliss1Debug();
    }
    if (&src == &Gliss2Button)
    {
        //Gliss2
        //When Gliss2Button clicked call virtual function
        //Call Gliss2Debug
        Gliss2Debug();
    }
    if (&src == &Pompe1Button)
    {
        //Pompe1
        //When Pompe1Button clicked call virtual function
        //Call Pompe1Debug
        Pompe1Debug();
    }
    if (&src == &Pompe2Button)
    {
        //Pompe2
        //When Pompe2Button clicked call virtual function
        //Call Pompe2Debug
        Pompe2Debug();
    }
}
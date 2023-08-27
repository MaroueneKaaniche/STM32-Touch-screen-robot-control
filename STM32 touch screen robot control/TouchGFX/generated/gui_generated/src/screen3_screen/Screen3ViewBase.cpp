/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen3_screen/Screen3ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen3ViewBase::Screen3ViewBase() :
    flexButtonCallback(this, &Screen3ViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    scalableImage2.setPosition(0, 0, 480, 272);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage2);

    RotateTestString.setXY(31, 198);
    RotateTestString.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    RotateTestString.setLinespacing(0);
    RotateTestString.setTypedText(touchgfx::TypedText(T___SINGLEUSE_JVL9));
    add(RotateTestString);

    containerNbreRO.setPosition(330, 228, 135, 25);
    nakass1n.setBitmaps(Bitmap(BITMAP_A_ID), Bitmap(BITMAP_B_ID));
    nakass1n.setBitmapXY(0, 0);
    nakass1n.setAction(flexButtonCallback);
    nakass1n.setPosition(104, 0, 31, 25);
    containerNbreRO.add(nakass1n);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_TOPBAR_TOPBAR_BG_PORTRAIT_240X320PX_ID));
    scalableImage1.setPosition(36, 1, 64, 24);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    containerNbreRO.add(scalableImage1);

    valRotation.setPosition(35, 5, 66, 15);
    valRotation.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    valRotation.setLinespacing(0);
    Unicode::snprintf(valRotationBuffer, VALROTATION_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_JDCA).getText());
    valRotation.setWildcard(valRotationBuffer);
    valRotation.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FOIN));
    containerNbreRO.add(valRotation);

    zid1n.setBitmaps(Bitmap(BITMAP_C_ID), Bitmap(BITMAP_D_ID));
    zid1n.setBitmapXY(0, 0);
    zid1n.setAction(flexButtonCallback);
    zid1n.setPosition(0, 0, 31, 25);
    containerNbreRO.add(zid1n);

    add(containerNbreRO);

    RotationCont.setPosition(228, 189, 93, 64);
    RotateButton.setBoxWithBorderPosition(0, 0, 93, 63);
    RotateButton.setBorderSize(5);
    RotateButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    RotateButton.setAction(flexButtonCallback);
    RotateButton.setPosition(0, 0, 93, 63);
    RotationCont.add(RotateButton);

    Rotation.setPosition(0, 22, 93, 22);
    Rotation.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Rotation.setLinespacing(0);
    Rotation.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RX0Q));
    RotationCont.add(Rotation);

    add(RotationCont);

    NavString.setXY(31, 65);
    NavString.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    NavString.setLinespacing(0);
    NavString.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8K3F));
    add(NavString);

    GO.setPosition(228, 35, 93, 126);
    GOButton.setBoxWithBorderPosition(0, 0, 93, 126);
    GOButton.setBorderSize(5);
    GOButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    GOButton.setAction(flexButtonCallback);
    GOButton.setPosition(0, 0, 93, 126);
    GO.add(GOButton);

    textArea1_1.setPosition(0, 50, 93, 26);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_L2HD));
    GO.add(textArea1_1);

    add(GO);

    yCont.setPosition(330, 148, 135, 68);
    scalableImage1_1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_TOPBAR_TOPBAR_BG_PORTRAIT_240X320PX_ID));
    scalableImage1_1.setPosition(0, 26, 135, 20);
    scalableImage1_1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    yCont.add(scalableImage1_1);

    valY.setPosition(0, 25, 135, 20);
    valY.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    valY.setLinespacing(0);
    Unicode::snprintf(valYBuffer, VALY_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_LGS6).getText());
    valY.setWildcard(valYBuffer);
    valY.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KADZ));
    yCont.add(valY);

    zid1000y.setBitmaps(Bitmap(BITMAP_C_ID), Bitmap(BITMAP_D_ID));
    zid1000y.setBitmapXY(0, 0);
    zid1000y.setAction(flexButtonCallback);
    zid1000y.setPosition(-1, 0, 31, 25);
    yCont.add(zid1000y);

    zid100y.setBitmaps(Bitmap(BITMAP_C_ID), Bitmap(BITMAP_D_ID));
    zid100y.setBitmapXY(0, 0);
    zid100y.setAction(flexButtonCallback);
    zid100y.setPosition(34, 0, 31, 25);
    yCont.add(zid100y);

    zid10y.setBitmaps(Bitmap(BITMAP_C_ID), Bitmap(BITMAP_D_ID));
    zid10y.setBitmapXY(0, 0);
    zid10y.setAction(flexButtonCallback);
    zid10y.setPosition(69, 0, 31, 25);
    yCont.add(zid10y);

    zid1y.setBitmaps(Bitmap(BITMAP_C_ID), Bitmap(BITMAP_D_ID));
    zid1y.setBitmapXY(0, 0);
    zid1y.setAction(flexButtonCallback);
    zid1y.setPosition(104, 0, 31, 25);
    yCont.add(zid1y);

    nakass1000y.setBitmaps(Bitmap(BITMAP_A_ID), Bitmap(BITMAP_B_ID));
    nakass1000y.setBitmapXY(0, 0);
    nakass1000y.setAction(flexButtonCallback);
    nakass1000y.setPosition(-1, 45, 31, 25);
    yCont.add(nakass1000y);

    nakass100y.setBitmaps(Bitmap(BITMAP_A_ID), Bitmap(BITMAP_B_ID));
    nakass100y.setBitmapXY(0, 0);
    nakass100y.setAction(flexButtonCallback);
    nakass100y.setPosition(34, 45, 31, 25);
    yCont.add(nakass100y);

    nakass10y.setBitmaps(Bitmap(BITMAP_A_ID), Bitmap(BITMAP_B_ID));
    nakass10y.setBitmapXY(0, 0);
    nakass10y.setAction(flexButtonCallback);
    nakass10y.setPosition(69, 45, 31, 25);
    yCont.add(nakass10y);

    nakass1y.setBitmaps(Bitmap(BITMAP_A_ID), Bitmap(BITMAP_B_ID));
    nakass1y.setBitmapXY(0, 0);
    nakass1y.setAction(flexButtonCallback);
    nakass1y.setPosition(104, 45, 31, 25);
    yCont.add(nakass1y);

    add(yCont);

    xCont.setPosition(330, 54, 135, 68);
    scalableImage1_1_1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_TOPBAR_TOPBAR_BG_PORTRAIT_240X320PX_ID));
    scalableImage1_1_1.setPosition(0, 26, 135, 18);
    scalableImage1_1_1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    xCont.add(scalableImage1_1_1);

    valX.setPosition(0, 24, 135, 20);
    valX.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    valX.setLinespacing(0);
    Unicode::snprintf(valXBuffer, VALX_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_RSQH).getText());
    valX.setWildcard(valXBuffer);
    valX.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6Q4R));
    xCont.add(valX);

    zid1000x.setBitmaps(Bitmap(BITMAP_C_ID), Bitmap(BITMAP_D_ID));
    zid1000x.setBitmapXY(0, 0);
    zid1000x.setAction(flexButtonCallback);
    zid1000x.setPosition(0, -1, 31, 25);
    xCont.add(zid1000x);

    zid100x.setBitmaps(Bitmap(BITMAP_C_ID), Bitmap(BITMAP_D_ID));
    zid100x.setBitmapXY(0, 0);
    zid100x.setAction(flexButtonCallback);
    zid100x.setPosition(34, -1, 31, 25);
    xCont.add(zid100x);

    zid10x.setBitmaps(Bitmap(BITMAP_C_ID), Bitmap(BITMAP_D_ID));
    zid10x.setBitmapXY(0, 0);
    zid10x.setAction(flexButtonCallback);
    zid10x.setPosition(69, -1, 31, 25);
    xCont.add(zid10x);

    zid1x.setBitmaps(Bitmap(BITMAP_C_ID), Bitmap(BITMAP_D_ID));
    zid1x.setBitmapXY(0, 0);
    zid1x.setAction(flexButtonCallback);
    zid1x.setPosition(104, -1, 31, 25);
    xCont.add(zid1x);

    nakass1000x.setBitmaps(Bitmap(BITMAP_A_ID), Bitmap(BITMAP_B_ID));
    nakass1000x.setBitmapXY(0, 0);
    nakass1000x.setAction(flexButtonCallback);
    nakass1000x.setPosition(-1, 44, 31, 25);
    xCont.add(nakass1000x);

    nakass100x.setBitmaps(Bitmap(BITMAP_A_ID), Bitmap(BITMAP_B_ID));
    nakass100x.setBitmapXY(0, 0);
    nakass100x.setAction(flexButtonCallback);
    nakass100x.setPosition(34, 44, 31, 25);
    xCont.add(nakass100x);

    nakass10x.setBitmaps(Bitmap(BITMAP_A_ID), Bitmap(BITMAP_B_ID));
    nakass10x.setBitmapXY(0, 0);
    nakass10x.setAction(flexButtonCallback);
    nakass10x.setPosition(69, 44, 31, 25);
    xCont.add(nakass10x);

    nakass1x.setBitmaps(Bitmap(BITMAP_A_ID), Bitmap(BITMAP_B_ID));
    nakass1x.setBitmapXY(0, 0);
    nakass1x.setAction(flexButtonCallback);
    nakass1x.setPosition(104, 44, 31, 25);
    xCont.add(nakass1x);

    add(xCont);

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
    Back.setTypedText(touchgfx::TypedText(T___SINGLEUSE_G064));
    BackCnt.add(Back);

    add(BackCnt);

    Xpos.setPosition(330, 35, 74, 16);
    Xpos.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Xpos.setLinespacing(0);
    Xpos.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DU0L));
    add(Xpos);

    Ypos.setPosition(330, 128, 74, 16);
    Ypos.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Ypos.setLinespacing(0);
    Ypos.setTypedText(touchgfx::TypedText(T___SINGLEUSE_V1SM));
    add(Ypos);
}

Screen3ViewBase::~Screen3ViewBase()
{

}

void Screen3ViewBase::setupScreen()
{

}

void Screen3ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &BackButton)
    {
        //Back
        //When BackButton clicked change screen to Screen1
        //Go to Screen1 with screen transition towards West
        application().gotoScreen1ScreenWipeTransitionWest();
    }
    if (&src == &zid1x)
    {
        //zid1x
        //When zid1x clicked call virtual function
        //Call Zid1_x
        Zid1_x();
    }
    if (&src == &nakass1x)
    {
        //nakass1x
        //When nakass1x clicked call virtual function
        //Call Nakass1_x
        Nakass1_x();
    }
    if (&src == &nakass10x)
    {
        //nakass10x
        //When nakass10x clicked call virtual function
        //Call Nakass10_x
        Nakass10_x();
    }
    if (&src == &zid10x)
    {
        //zid10x
        //When zid10x clicked call virtual function
        //Call Zid10_x
        Zid10_x();
    }
    if (&src == &nakass100x)
    {
        //nakass100x
        //When nakass100x clicked call virtual function
        //Call Nakass100_x
        Nakass100_x();
    }
    if (&src == &zid100x)
    {
        //zid100x
        //When zid100x clicked call virtual function
        //Call Zid100_x
        Zid100_x();
    }
    if (&src == &nakass1000x)
    {
        //nakass1000x
        //When nakass1000x clicked call virtual function
        //Call Nakass1000_x
        Nakass1000_x();
    }
    if (&src == &zid1000x)
    {
        //zid1000x
        //When zid1000x clicked call virtual function
        //Call Zid1000_x
        Zid1000_x();
    }
    if (&src == &zid1y)
    {
        //zid1y
        //When zid1y clicked call virtual function
        //Call Zid1_y
        Zid1_y();
    }
    if (&src == &zid10y)
    {
        //zid10y
        //When zid10y clicked call virtual function
        //Call Zid10_y
        Zid10_y();
    }
    if (&src == &zid100y)
    {
        //zid100y
        //When zid100y clicked call virtual function
        //Call Zid100_y
        Zid100_y();
    }
    if (&src == &zid1000y)
    {
        //zid1000y
        //When zid1000y clicked call virtual function
        //Call Zid1000_y
        Zid1000_y();
    }
    if (&src == &nakass1y)
    {
        //nakass1y
        //When nakass1y clicked call virtual function
        //Call Nakass1_y
        Nakass1_y();
    }
    if (&src == &nakass10y)
    {
        //nakass10y
        //When nakass10y clicked call virtual function
        //Call Nakass10_y
        Nakass10_y();
    }
    if (&src == &nakass100y)
    {
        //nakass100y
        //When nakass100y clicked call virtual function
        //Call Nakass100_y
        Nakass100_y();
    }
    if (&src == &nakass1000y)
    {
        //nakass1000y
        //When nakass1000y clicked call virtual function
        //Call Nakass1000_y
        Nakass1000_y();
    }
    if (&src == &zid1n)
    {
        //zid1R
        //When zid1n clicked call virtual function
        //Call Zid1R
        Zid1R();
    }
    if (&src == &nakass1n)
    {
        //nakass1R
        //When nakass1n clicked call virtual function
        //Call Nakass1R
        Nakass1R();
    }
    if (&src == &GOButton)
    {
        //ebaathXY
        //When GOButton clicked call virtual function
        //Call Go
        Go();
    }
    if (&src == &RotateButton)
    {
        //ebaathNR
        //When RotateButton clicked call virtual function
        //Call Rotate
        Rotate();
    }
}

void Screen3ViewBase::afterTransition()
{
    //TestRobotSghir
    //When screen transition ends call virtual function
    //Call SetTestingRobotSghir
    SetTestingRobotSghir();
}
/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    flexButtonCallback(this, &Screen1ViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    scalableImage2.setPosition(0, 0, 480, 272);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage2);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_AGE_ID));
    scalableImage1.setPosition(124, 12, 232, 124);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage1);

    textProgress2.setXY(-54, -47);
    textProgress2.setProgressIndicatorPosition(0, 0, 84, 34);
    textProgress2.setRange(0, 100);
    textProgress2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textProgress2.setNumberOfDecimals(1);
    textProgress2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9CFT));
    textProgress2.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_TEXT_PROGRESS_BG_SQUARE_ID));
    textProgress2.setValue(50);
    textProgress2.setAlpha(0);
    add(textProgress2);

    TuningContainer.setPosition(115, 207, 121, 50);
    TunningButton.setBoxWithBorderPosition(0, 0, 121, 50);
    TunningButton.setBorderSize(5);
    TunningButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    TunningButton.setAction(flexButtonCallback);
    TunningButton.setPosition(0, 0, 121, 50);
    TuningContainer.add(TunningButton);

    Tuning.setXY(27, 13);
    Tuning.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    Tuning.setLinespacing(0);
    Tuning.setTypedText(touchgfx::TypedText(T___SINGLEUSE_POUI));
    TuningContainer.add(Tuning);

    add(TuningContainer);

    MatchContainer.setPosition(115, 150, 121, 50);
    MatchButton.setBoxWithBorderPosition(0, 0, 121, 50);
    MatchButton.setBorderSize(5);
    MatchButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    MatchButton.setAction(flexButtonCallback);
    MatchButton.setPosition(0, 0, 121, 50);
    MatchContainer.add(MatchButton);

    Match.setXY(30, 13);
    Match.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    Match.setLinespacing(0);
    Match.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8MI2));
    MatchContainer.add(Match);

    add(MatchContainer);

    TestContainer.setPosition(245, 207, 121, 50);
    TestingButton.setBoxWithBorderPosition(0, 0, 121, 50);
    TestingButton.setBorderSize(5);
    TestingButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    TestingButton.setAction(flexButtonCallback);
    TestingButton.setPosition(0, 0, 121, 50);
    TestContainer.add(TestingButton);

    Testing.setXY(39, 13);
    Testing.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    Testing.setLinespacing(0);
    Testing.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NG93));
    TestContainer.add(Testing);

    add(TestContainer);

    DebugContainer.setPosition(245, 151, 121, 50);
    DebugButton.setBoxWithBorderPosition(0, 0, 121, 50);
    DebugButton.setBorderSize(5);
    DebugButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(52, 55, 67), touchgfx::Color::getColorFromRGB(173, 177, 178), touchgfx::Color::getColorFromRGB(24, 33, 41), touchgfx::Color::getColorFromRGB(88, 91, 94));
    DebugButton.setAction(flexButtonCallback);
    DebugButton.setPosition(0, 0, 121, 50);
    DebugContainer.add(DebugButton);

    Debug.setXY(30, 13);
    Debug.setColor(touchgfx::Color::getColorFromRGB(250, 247, 247));
    Debug.setLinespacing(0);
    Debug.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1JU9));
    DebugContainer.add(Debug);

    add(DebugContainer);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &TunningButton)
    {
        //GoToTunnig
        //When TunningButton clicked change screen to Screen1_1
        //Go to Screen1_1 with screen transition towards West
        application().gotoScreen1_1ScreenWipeTransitionWest();
    }
    if (&src == &TestingButton)
    {
        //GoToTest
        //When TestingButton clicked change screen to Screen1_1_1
        //Go to Screen1_1_1 with screen transition towards East
        application().gotoScreen1_1_1ScreenWipeTransitionEast();
    }
    if (&src == &MatchButton)
    {
        //GoToMatch
        //When MatchButton clicked change screen to Screen4
        //Go to Screen4 with screen transition towards South
        application().gotoScreen4ScreenWipeTransitionSouth();
    }
    if (&src == &DebugButton)
    {
        //GoToDebug
        //When DebugButton clicked change screen to Screen8
        //Go to Screen8 with screen transition towards North
        application().gotoScreen8ScreenWipeTransitionNorth();
    }
}

void Screen1ViewBase::afterTransition()
{
    //Reset
    //When screen transition ends call virtual function
    //Call Reset
    Reset();
}

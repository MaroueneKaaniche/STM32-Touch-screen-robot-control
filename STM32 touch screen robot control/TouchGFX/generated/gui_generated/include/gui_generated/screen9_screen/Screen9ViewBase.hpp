/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN9VIEWBASE_HPP
#define SCREEN9VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen9_screen/Screen9Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class Screen9ViewBase : public touchgfx::View<Screen9Presenter>
{
public:
    Screen9ViewBase();
    virtual ~Screen9ViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void RightMotor()
    {
        // Override and implement this function in Screen9
    }
    virtual void LeftMotor()
    {
        // Override and implement this function in Screen9
    }
    virtual void Servo1Debug()
    {
        // Override and implement this function in Screen9
    }
    virtual void Servo23Debug()
    {
        // Override and implement this function in Screen9
    }
    virtual void ServoBatrattDebug()
    {
        // Override and implement this function in Screen9
    }
    virtual void ValveDebug()
    {
        // Override and implement this function in Screen9
    }
    virtual void Pompe1Debug()
    {
        // Override and implement this function in Screen9
    }
    virtual void Pompe2Debug()
    {
        // Override and implement this function in Screen9
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ScalableImage scalableImage2;
    touchgfx::Container MotorRightContainer;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  RightMotorButton;
    touchgfx::TextArea MotorRight;
    touchgfx::Container MotorLefttContainer;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  LeftButton;
    touchgfx::TextArea MotorLeft;
    touchgfx::Container Servo1Container;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  Servo1Button;
    touchgfx::TextArea Servo1;
    touchgfx::Container Servo2and3Container;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  Servo2and3Button;
    touchgfx::TextArea Servo2and3;
    touchgfx::Container ServoBatrattContainer;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  ServoBatrattButton;
    touchgfx::TextArea ServoBatratt;
    touchgfx::Container ValveContainer;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  ValveButton;
    touchgfx::TextArea Valve;
    touchgfx::Container Pompe1Container;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  Pompe1Button;
    touchgfx::TextArea Pompe1;
    touchgfx::Container Pompe2Container;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  Pompe2Button;
    touchgfx::TextArea Pompe2;
    touchgfx::Container BackCnt;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  BackButton;
    touchgfx::TextArea Back;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen9ViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREEN9VIEWBASE_HPP
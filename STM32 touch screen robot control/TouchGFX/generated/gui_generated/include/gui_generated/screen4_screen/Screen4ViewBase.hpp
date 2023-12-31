/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN4VIEWBASE_HPP
#define SCREEN4VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen4_screen/Screen4Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/containers/Container.hpp>

class Screen4ViewBase : public touchgfx::View<Screen4Presenter>
{
public:
    Screen4ViewBase();
    virtual ~Screen4ViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void SetViolet()
    {
        // Override and implement this function in Screen4
    }
    virtual void SetYellow()
    {
        // Override and implement this function in Screen4
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
    touchgfx::ScalableImage scalableImage1;
    touchgfx::TextArea PickString;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  YellowBtn;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  VioletBtn;
    touchgfx::Container BackCnt;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  BackButton;
    touchgfx::TextArea Back;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen4ViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREEN4VIEWBASE_HPP

#ifndef SCREEN5_1VIEW_HPP
#define SCREEN5_1VIEW_HPP

#include <gui_generated/screen5_1_screen/Screen5_1ViewBase.hpp>
#include <gui/screen5_1_screen/Screen5_1Presenter.hpp>

class Screen5_1View : public Screen5_1ViewBase
{
public:
    Screen5_1View();
    virtual ~Screen5_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void GetValues();
    virtual void handleTickEvent();
    virtual void SetTo0();
protected:
};

#endif // SCREEN5_1VIEW_HPP

#ifndef SCREEN9_1VIEW_HPP
#define SCREEN9_1VIEW_HPP

#include <gui_generated/screen9_1_screen/Screen9_1ViewBase.hpp>
#include <gui/screen9_1_screen/Screen9_1Presenter.hpp>

class Screen9_1View : public Screen9_1ViewBase
{
public:
    Screen9_1View();
    virtual ~Screen9_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREEN9_1VIEW_HPP

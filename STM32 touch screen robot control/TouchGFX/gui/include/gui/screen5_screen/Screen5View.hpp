#ifndef SCREEN5VIEW_HPP
#define SCREEN5VIEW_HPP

#include <gui_generated/screen5_screen/Screen5ViewBase.hpp>
#include <gui/screen5_screen/Screen5Presenter.hpp>

class Screen5View : public Screen5ViewBase
{
public:
    Screen5View();
    virtual ~Screen5View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void ChooseS4();
    virtual void ChooseS3();
    virtual void ChooseS2();
    virtual void ChooseS1();
protected:
};

#endif // SCREEN5VIEW_HPP

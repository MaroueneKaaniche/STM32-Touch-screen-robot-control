#ifndef SCREEN3_1VIEW_HPP
#define SCREEN3_1VIEW_HPP

#include <gui_generated/screen3_1_screen/Screen3_1ViewBase.hpp>
#include <gui/screen3_1_screen/Screen3_1Presenter.hpp>

class Screen3_1View : public Screen3_1ViewBase
{
public:
    Screen3_1View();
    virtual ~Screen3_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void Zid1R();
    virtual void Nakass1R();
    virtual void Zid1000_x();
    virtual void Zid100_x();
    virtual void Zid10_x();
    virtual void Zid1_x();
    virtual void Nakass1000_x();
    virtual void Nakass100_x();
    virtual void Nakass10_x();
    virtual void Nakass1_x();
    virtual void Zid1000_y();
    virtual void Zid100_y();
    virtual void Zid10_y();
    virtual void Zid1_y();
    virtual void Nakass1000_y();
    virtual void Nakass100_y();
    virtual void Nakass10_y();
    virtual void Nakass1_y();
    virtual void Go();
    virtual void Rotate();
    virtual void SetTestingRobotKbir();
protected:
};

#endif // SCREEN3_1VIEW_HPP

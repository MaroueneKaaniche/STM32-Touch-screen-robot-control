#ifndef SCREEN3VIEW_HPP
#define SCREEN3VIEW_HPP

#include <gui_generated/screen3_screen/Screen3ViewBase.hpp>
#include <gui/screen3_screen/Screen3Presenter.hpp>

class Screen3View : public Screen3ViewBase
{
public:
    Screen3View();
    virtual ~Screen3View() {}
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
    virtual void SetTestingRobotSghir();
protected:
};

#endif // SCREEN3VIEW_HPP

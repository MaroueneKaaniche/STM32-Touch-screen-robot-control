#ifndef SCREEN2VIEW_HPP
#define SCREEN2VIEW_HPP

#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>


class Screen2View : public Screen2ViewBase
{
public:
    Screen2View();
    virtual ~Screen2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void p100();
    virtual void p10();
    virtual void p1();
    virtual void p01();
    virtual void p001();
    virtual void p0001();
    virtual void p00001();
    virtual void p000001();
    virtual void m100();
    virtual void m10();
    virtual void m1();
    virtual void m01();
    virtual void m001();
    virtual void m0001();
    virtual void m00001();
    virtual void m000001();
    virtual void ChangeE();
    virtual void ChangeS();
    virtual void ChangeRW();
    virtual void ChangeLW();
    virtual void handleTickEvent();
    virtual void SetTuningRobotSghir();
protected:
};

#endif // SCREEN2VIEW_HPP

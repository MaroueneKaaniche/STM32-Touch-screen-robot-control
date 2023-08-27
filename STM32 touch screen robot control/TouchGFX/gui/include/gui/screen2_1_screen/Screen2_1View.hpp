#ifndef SCREEN2_1VIEW_HPP
#define SCREEN2_1VIEW_HPP

#include <gui_generated/screen2_1_screen/Screen2_1ViewBase.hpp>
#include <gui/screen2_1_screen/Screen2_1Presenter.hpp>

class Screen2_1View : public Screen2_1ViewBase
{
public:
    Screen2_1View();
    virtual ~Screen2_1View() {}
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
    virtual void SetTuningRobotKbir();

protected:
};

#endif // SCREEN2_1VIEW_HPP

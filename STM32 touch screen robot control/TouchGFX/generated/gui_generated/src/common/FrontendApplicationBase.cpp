/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>
#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <gui/screen1_1_screen/Screen1_1View.hpp>
#include <gui/screen1_1_screen/Screen1_1Presenter.hpp>
#include <gui/screen1_1_1_screen/Screen1_1_1View.hpp>
#include <gui/screen1_1_1_screen/Screen1_1_1Presenter.hpp>
#include <gui/screen2_screen/Screen2View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>
#include <gui/screen3_screen/Screen3View.hpp>
#include <gui/screen3_screen/Screen3Presenter.hpp>
#include <gui/screen4_screen/Screen4View.hpp>
#include <gui/screen4_screen/Screen4Presenter.hpp>
#include <gui/screen5_screen/Screen5View.hpp>
#include <gui/screen5_screen/Screen5Presenter.hpp>
#include <gui/screen5_1_screen/Screen5_1View.hpp>
#include <gui/screen5_1_screen/Screen5_1Presenter.hpp>
#include <gui/screen6_screen/Screen6View.hpp>
#include <gui/screen6_screen/Screen6Presenter.hpp>
#include <gui/screen7_screen/Screen7View.hpp>
#include <gui/screen7_screen/Screen7Presenter.hpp>
#include <gui/screen8_screen/Screen8View.hpp>
#include <gui/screen8_screen/Screen8Presenter.hpp>
#include <gui/screen9_screen/Screen9View.hpp>
#include <gui/screen9_screen/Screen9Presenter.hpp>
#include <gui/screen9_1_screen/Screen9_1View.hpp>
#include <gui/screen9_1_screen/Screen9_1Presenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
    touchgfx::Texts::setLanguage(GB);
    reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
}

/*
 * Screen Transition Declarations
 */

// Screen1

void FrontendApplicationBase::gotoScreen1ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen1ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen1ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Screen1View, Screen1Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreen1ScreenWipeTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen1ScreenWipeTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen1ScreenWipeTransitionEastImpl()
{
    touchgfx::makeTransition<Screen1View, Screen1Presenter, touchgfx::WipeTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreen1ScreenWipeTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen1ScreenWipeTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen1ScreenWipeTransitionWestImpl()
{
    touchgfx::makeTransition<Screen1View, Screen1Presenter, touchgfx::WipeTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreen1ScreenWipeTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen1ScreenWipeTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen1ScreenWipeTransitionNorthImpl()
{
    touchgfx::makeTransition<Screen1View, Screen1Presenter, touchgfx::WipeTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen1_1

void FrontendApplicationBase::gotoScreen1_1ScreenWipeTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen1_1ScreenWipeTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen1_1ScreenWipeTransitionWestImpl()
{
    touchgfx::makeTransition<Screen1_1View, Screen1_1Presenter, touchgfx::WipeTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen1_1_1

void FrontendApplicationBase::gotoScreen1_1_1ScreenWipeTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen1_1_1ScreenWipeTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen1_1_1ScreenWipeTransitionEastImpl()
{
    touchgfx::makeTransition<Screen1_1_1View, Screen1_1_1Presenter, touchgfx::WipeTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen2

void FrontendApplicationBase::gotoScreen2ScreenWipeTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen2ScreenWipeTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen2ScreenWipeTransitionWestImpl()
{
    touchgfx::makeTransition<Screen2View, Screen2Presenter, touchgfx::WipeTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen3

void FrontendApplicationBase::gotoScreen3ScreenWipeTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen3ScreenWipeTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen3ScreenWipeTransitionEastImpl()
{
    touchgfx::makeTransition<Screen3View, Screen3Presenter, touchgfx::WipeTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen4

void FrontendApplicationBase::gotoScreen4ScreenWipeTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen4ScreenWipeTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen4ScreenWipeTransitionSouthImpl()
{
    touchgfx::makeTransition<Screen4View, Screen4Presenter, touchgfx::WipeTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreen4ScreenWipeTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen4ScreenWipeTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen4ScreenWipeTransitionNorthImpl()
{
    touchgfx::makeTransition<Screen4View, Screen4Presenter, touchgfx::WipeTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen5

void FrontendApplicationBase::gotoScreen5ScreenWipeTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen5ScreenWipeTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen5ScreenWipeTransitionSouthImpl()
{
    touchgfx::makeTransition<Screen5View, Screen5Presenter, touchgfx::WipeTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreen5ScreenWipeTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen5ScreenWipeTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen5ScreenWipeTransitionNorthImpl()
{
    touchgfx::makeTransition<Screen5View, Screen5Presenter, touchgfx::WipeTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen5_1

void FrontendApplicationBase::gotoScreen5_1ScreenWipeTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen5_1ScreenWipeTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen5_1ScreenWipeTransitionSouthImpl()
{
    touchgfx::makeTransition<Screen5_1View, Screen5_1Presenter, touchgfx::WipeTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen6

void FrontendApplicationBase::gotoScreen6ScreenWipeTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen6ScreenWipeTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen6ScreenWipeTransitionSouthImpl()
{
    touchgfx::makeTransition<Screen6View, Screen6Presenter, touchgfx::WipeTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen7

void FrontendApplicationBase::gotoScreen7ScreenWipeTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen7ScreenWipeTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen7ScreenWipeTransitionNorthImpl()
{
    touchgfx::makeTransition<Screen7View, Screen7Presenter, touchgfx::WipeTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen8

void FrontendApplicationBase::gotoScreen8ScreenWipeTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen8ScreenWipeTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen8ScreenWipeTransitionNorthImpl()
{
    touchgfx::makeTransition<Screen8View, Screen8Presenter, touchgfx::WipeTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreen8ScreenWipeTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen8ScreenWipeTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen8ScreenWipeTransitionEastImpl()
{
    touchgfx::makeTransition<Screen8View, Screen8Presenter, touchgfx::WipeTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen9

void FrontendApplicationBase::gotoScreen9ScreenWipeTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen9ScreenWipeTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen9ScreenWipeTransitionEastImpl()
{
    touchgfx::makeTransition<Screen9View, Screen9Presenter, touchgfx::WipeTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen9_1

void FrontendApplicationBase::gotoScreen9_1ScreenWipeTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen9_1ScreenWipeTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen9_1ScreenWipeTransitionWestImpl()
{
    touchgfx::makeTransition<Screen9_1View, Screen9_1Presenter, touchgfx::WipeTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

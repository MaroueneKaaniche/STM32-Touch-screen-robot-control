#ifndef SCREEN9_1PRESENTER_HPP
#define SCREEN9_1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen9_1View;

class Screen9_1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen9_1Presenter(Screen9_1View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Screen9_1Presenter() {};

private:
    Screen9_1Presenter();

    Screen9_1View& view;
};

#endif // SCREEN9_1PRESENTER_HPP

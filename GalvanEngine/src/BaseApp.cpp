#pragma once
#include "Prerequisites.h"
#include "Window.h"
#include "ShapeFactory.h"
#include "ECS/Actor.h"

class
BaseApp {
public:
    BaseApp() = default;
    ~BaseApp() = default;

    int
    run();

    bool
    initialize();

    void
    update();

    void
    render();

    void
    cleanup();

private:
    sf::Clock clock;
    sf::Time deltaTime;

    Window* m_window;
    EngineUtilities::TSharedPointer<Actor> Triangle;
    EngineUtilities::TSharedPointer<Actor> Circle;
};
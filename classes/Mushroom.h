//
// Created by Agus on 23/9/2020.
//
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Enemy.h"
using namespace sf;

class Mushroom : public Enemy {
public:
    Vector2f dimension;
    Vector2f initialFramePoint;

    Mushroom() {
        setTexture("../assets/enemies/Mushroom/mushroomSheet.png");
        dimension = Vector2f(40.f, 45.f);
        initialFramePoint = Vector2f(55.f, 60.f);
    }
};
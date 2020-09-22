//
// Created by Agus on 28/8/2020.
//
#include "Engine.h"
#include <iostream>

void Engine::input(Event event) {

    // Aca se manejan las teclas que sean aparte del jugador
    if (Keyboard::isKeyPressed(Keyboard::Escape)) {
        window.close();
    }

    // Disparo
    if (Mouse::isButtonPressed(Mouse::Left)) {
        b1.sprite.setPosition(player.getMiddlePoint());
        b1.currVelocity = aimDirNormalized * b1.maxSpeed;

        bullets.push_back(Bullet(b1));
    }

}
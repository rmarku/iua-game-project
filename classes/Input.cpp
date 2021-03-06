//
// Created by Agus on 28/8/2020.
//
#include "Engine.h"

void Engine::input(Event& event) {

    // Aca se manejan las teclas que sean aparte del jugador
    if (Keyboard::isKeyPressed(Keyboard::Escape)) {
        window.close();
    }

    // Disparo
    if (Mouse::isButtonPressed(Mouse::Left)) {
        if (shootingTimer.getElapsedTime().asSeconds() >= shootingDelay) {
            b1.sprite.setPosition(player.getMiddlePoint().x, player.getMiddlePoint().y - 15);
            b1.currVelocity = aimDirNormalized * b1.maxSpeed;

            bullets.emplace_back(b1);
            shootingTimer.restart();
        }

    }

}
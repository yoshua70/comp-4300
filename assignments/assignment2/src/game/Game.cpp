#include "Game.hpp"
#include <iostream>

Game::Game() = default;
Game::~Game() = default;

void Game::say_hello()
{
    std::cout << "Hello, World !" << std::endl;
}

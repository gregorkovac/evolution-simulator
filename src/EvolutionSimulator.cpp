#include <stdio.h>
#include "../include/SimulationHandler.h"

SimulationHandler *simulationHandler = nullptr;

int main(int argc, char* argv[]) {

    simulationHandler = new SimulationHandler();

    simulationHandler->init("Evolution simulator", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1920, 1080, SDL_WINDOW_SHOWN);
    
    while (simulationHandler->isRunning()) {
        simulationHandler->handleEvents();
        simulationHandler->update();
        simulationHandler->render();
    }

    simulationHandler->clean();

    return 0;
}
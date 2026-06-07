#include <SFML/Graphics.hpp>
#include <thread>
#include <iostream>
#include <format>
#include "interface/interfaceadapter.h"
#include "program/program.h"
#include "emulator/emulator.h"


inline constexpr int PX_WIDTH = 4;


int main (int argc, char **argv) {
  gb::GameRom game_rom;
  if (argc > 1) {
    // Read game rom, if there was an error quit emulator
    if (not readRom(std::string(argv[1]), game_rom)) {
      return 1;
    }
  } else {
    std::cout << "ERROR: No game provided." << std::endl;
    return 1;
  }
  gb::EmulatorConfig config = {
    .synch_execution = true,
    .skip_boot_room = true
  };
  sf::RenderWindow window = createWindow(PX_WIDTH);
  PCInterface interface;
  std::thread emulation_thread(gb::emulator<PCInterface,false>, std::ref(interface), game_rom, config);
  interfaceLoop(interface, emulation_thread, window);
}
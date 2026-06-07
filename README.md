# 🕹️ SlimBoy: a highly efficient and customizable DMG emulator! (PC Interface)

This is the PC interface for SlimBoy, a classic Game Boy emulator (DMG) focused on two aspects: efficiency and portability.
For more details, such as list of supported and incoming features, as well as information on the
emulation core, refer to the [SlimBoy repo](https://github.com/Vicara12/SlimBoy_GameBoyEmulator).

If you found this project interesting or built something cool with it, please give it a star!

<table>
  <tr>
    <td><img src="https://github.com/Vicara12/SlimBoy_GameBoyEmulator/blob/master/res/vrally.gif?raw=true" width="300" /></td>
    <td><img src="https://github.com/Vicara12/SlimBoy_GameBoyEmulator/blob/master/res/pokemon.gif?raw=true" width="300" /></td>
  </tr>
  <tr>
    <td align="center"><strong>V-Rally Championship</strong></td>
    <td align="center"><strong>Pokémon Red</strong></td>
  </tr>
  <tr>
    <td><img src="https://github.com/Vicara12/SlimBoy_GameBoyEmulator/blob/master/res/zelda.gif?raw=true" width="300" /></td>
    <td><img src="https://github.com/Vicara12/SlimBoy_GameBoyEmulator/blob/master/res/mario.gif?raw=true" width="300" /></td>
  </tr>
  <tr>
    <td align="center"><strong>Link's Awakening</strong></td>
    <td align="center"><strong>Super Mario Land</strong></td>
  </tr>
</table>


## How to build and run the project

Install SFML. If on Debian you can do this via `sudo apt install libsfml-dev`.

Clone the project and the emulator submodule
```bash
git clone --recursive https://github.com/Vicara12/GB_Emulator_PC
```

In the repo's root folder run
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

You will find the executable in the `build` directory. Execute it with the path to the game rom as
the first parameter and have fun!
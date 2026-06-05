
## How to build and run the project

Install SFML. If on Debian you can do this via `sudo apt install libsfml-dev`.

Clone the project and the emulator submodule
```bash
git clone --recursive https://github.com/Vicara12/GameBoyEmulator
```

In the repo's root folder run
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

You will find the executable in the `build` directory. Execute it with the path to the game rom as
the first parameter and have fun!
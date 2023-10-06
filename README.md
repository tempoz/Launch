# Launch

This is the dumbest possible program to indirect launching an application (by default, in a hidden window). I use it to launch batch files.

## How to build (Windows 11)

- Download [VSCode](https://code.visualstudio.com/).

- Follow the tutorial [here](https://code.visualstudio.com/docs/cpp/config-msvc) to set up VSCode to compile C++ using the Microsoft Visual C++ compiler.

- In addition to the `C/C++` extension, also install the `C/C++ Extension Pack` extension.

- Close VSCode.

- Open, and I cannot emphasize this enough, the `Developer Command Prompt for VS 2022`, which you can run by searching for it in the Start menu.

- In that console window, type `code .`.

- In the VSCode window that opens, `Open Folder` and navigate to wherever you cloned this repository.

- Assure VSCode that I'm a perfectly aboveboard and trustworthy individual ;)

- Hit `Ctrl-Shift-B` to build, and you should see the `.exe` file appear in the top-level directory of the repository.

## How to use

- Change the value assigned to `launchTarget` in the source code to your desired path.

- Run the executable and it will launch the file specified. If you specified a relative path, be sure to move `Launch.exe` to the correct directory first!
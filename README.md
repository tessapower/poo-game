# The Poo Game :poop:

[![Build](https://github.com/tessapower/cp-poo-game/actions/workflows/msbuild.yml/badge.svg)](https://github.com/tessapower/cp-poo-game/actions/workflows/msbuild.yml)

A silly little Poo Game - a simple first experiment with a DirectX 11 based framework. This is a first step toward creating my own game engine framework built directly on DX11 and the Win32 API.

## Wait, what?

The Poo Game comes from one of Planet Chili's YouTube C++ Tutorial series. If you peek under the hood, you'll find the game is built using modern C++20 features and the Chili Framework. The Chili Framework is built on DirectX 11 and uses the Win32 API for window management.

While not the most tasteful game, it was a good first experiment before I go ahead and create a similar framework on my own.

## Game Architecture

The core game loop runs inside `Game::Go` which is called each tick inside our `WinMain` function. All of the game logic is located and managed inside the `Game` class, acting as both Model and Controller. Clients of the Chili Framework are largely expected to contain their game logic to this class for building simple games. For this game, each game object implements the [Update Method](http://gameprogrammingpatterns.com/update-method.html) design pattern, and takes care of drawing itself to the window with the framework's `Graphics` context. All graphics you see in the game were provided with the framework, including the code to draw them to the window.

## Requirements

- Visual Studio 2022
- C++20
- Win7+
- A graphics card that supports DX11

## How to Build & Run

You can build the solution using either Visual Studio or from the command line with MSBuild.

### Visual Studio

Building the solution should work as expected. Wait for the solution to load and press the big ol' play button (or ctrl-F5 if you are lazy like me).

### MSBuild from the Developer Command Prompt

You can build the solution with MSBuild from a Developer Command Prompt, or from Powershell if you have the standalone Build Tools for VS 2022 installed and don't want to launch Visual Studio.

Run MSBuild.exe in the root of the project (automatically builds the `.sln` file in the current dir) and then launch the game with `& '.\x64\Debug\The Poo Game.exe'`.

## How to Play

:smile: Use the arrow keys to move your little Dude around the screen.

:red_circle: Reach the goals to score points.

:poop: Avoid the poop.

<img src="poogame.gif" alt="The Poo Game" height="300" />

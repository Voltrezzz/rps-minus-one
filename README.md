# rps-minus-one 🎮

Inspired by the Rock-Paper-Scissors variant shown in *Squid Game* Season 2( Minus One).

## 🕹️ Gameplay Overview

- Game runs in a loop until the user decides to quit.
- Both **user and computer pick two hands** (`R`, `P`, or `S`).
- **Computer reveals both its choices first**.
- User then chooses either their **first** or **second hand** to play.
- Computer randomly plays one of its two hands.
- Win = score +1, Lose = score reset to 0.
- A final scoreboard is shown at the end.

## 🔧 Features

- Loop-based gameplay
- Clean user interface
- Input validation and error handling
- Simple and readable C++ code
- Commented for understanding

## 🛠️ Build Instructions

```bash
g++ main.cpp -o rps-minus-one
./rps-minus-one


# 🎮 RPS Minus One

A twisted Rock-Paper-Scissors inspired by **Squid Game Season 2** — where **draws don’t save you**, and every round feels like a risk. Made from scratch with instinct, not tutorials.

---

## 🕹️ Gameplay

- You and the computer both get **two hands** (R, P, S).
- Computer reveals its hands first.
- You pick either Hand 1 or Hand 2.
- Computer randomly picks one of its own.
- If you win ➜ score +1.  
  If you lose ➜ score resets to **0**.  
  If draw ➜ survive, but with tension.

> Final score shown when you quit.

---

## 🎯 Features

- Dual-hand selection mechanic  
- Inspired by **Squid Game’s “Minus One”** round  
- Win streak = tension  
- Draws allowed (but unpredictable)  
- Clean CLI interface with minimal STL  
- Fully written in C++ (no copy-paste nonsense)
  
---

## ⚙️ Sample Output

ROCK PAPER SCISSORS MINUS ONE
*****************************

Your Choices Are: r, p
Computer Choices Are: p, s

Choose which hand to play (1 or 2): 1
You chose: r
Computer chose: s
You Win!

Score: 1 

---

## 🤔 Why I Made This

While most people build RPS by copying books or tutorials, I built this from scratch based on instinct — to explore tension-based game logic and make a Command Line Interface game that's actually fun.
Inspired by Squid Game’s psychological twists.

---

## 💡 Credit

Made by a 17 y/o SDE aspirant who doesn’t copy paste book exercises. Built on pure idea.

---

## 🛠️ Build & Run

```bash
g++ main.cpp -o rps-minus-one
./rps-minus-one

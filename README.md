# Number Guessing Game in C

## Description
This is a simple console-based game written in C. The computer picks a random number between 1 and 100, and the player tries to guess it using "Higher/Lower" hints.

I created this project to practice the following C programming concepts:
* `do-while` loops
* `if-else` conditional statements
* **Random number generation & Seeding** (`srand`, `time`)

## Installation & Compilation

Since this is a C source code, you must **compile** it before running.

### 1. Prerequisites
You need a C compiler installed on your system, such as **GCC** or **Clang**.
* To check if you have one, type `gcc --version` or `clang --version` in your terminal.

### 2. Compile the Code
Open your terminal in the project folder and run the following command. 
*(You can use `gcc` or `clang`, both will work)*:

```bash
gcc game.c -o game
# OR if you prefer Clang:
# clang game.c -o game
```
### 3. Run the Game
```bash
./game

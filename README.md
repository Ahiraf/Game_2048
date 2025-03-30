##### Game 2048

A console-based implementation of the popular 2048 game, built with C++. This project simulates the core gameplay mechanics, including tile merging, random tile generation, and win/lose conditions.


![winning-2048](https://github.com/user-attachments/assets/38ad33ca-a3e2-480e-bec8-f06687c0c1c0)


## 🎮 How to Play

1. The game starts with a **4x4 board** containing two randomly generated tiles (either 2 or 4).
2. Players can make the following moves:
   - **U**: Move tiles **Up**
   - **D**: Move tiles **Down**
   - **L**: Move tiles **Left**
   - **R**: Move tiles **Right**
3. Tiles with the same value merge into one when moved in the same direction, doubling their value.
4. The game ends when:
   - A tile with the value **2048** is achieved (**You Win! 🎉**).
   - No more valid moves are available (**Game Over 😢**).

---

## ✨ Features

- **2048 Mechanics**: Implements tile merging, random population, and boundary checks.
- **Win/Loss Detection**: Detects when the player wins by reaching 2048 or loses when no moves are left.
- **Random Tile Generation**: Randomly generates tiles with values 2 or 4 after each valid move.
- **User Interaction**: Accepts user input for moves and provides feedback for invalid moves.

---

## 🛠️ Code Structure

The project is encapsulated in a single `Game2048` structure. Key functions include:

### Core Functions
- `void init()`: Initializes the board with two random tiles.
- `void random_populate()`: Adds a random tile (2 or 4) to an empty cell.
- `void printboard()`: Prints the current state of the board.

### Move Operations
- `bool up()`
- `bool down()`
- `bool left()`
- `bool right()`

Each function performs the respective swipe operation on the board.

### Game Logic
- `bool has_game_ended()`: Checks if no moves are possible.
- `bool has_won()`: Checks if a tile with the value 2048 is present.
- `bool move_end()`: Determines if the game should end or continue.

---


## 🚀 Getting Started

### Prerequisites
- Ensure you have a C++ compiler installed.
- For **macOS**, install the command line tools using:
  ```bash
  xcode-select --install
  ```
- For **Windows** ,Install MinGW-w64 (a C++ compiler for Windows) or MSYS2 for a more comprehensive setup. Alternatively, you can use Visual Studio, which includes a C++ compiler.

### Steps to Run

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/Game_2048.git
   cd Game_2048
   ```
2. Compile the code:
   **For macOS/Linux:**
   ```bash
   g++ -std=c++17 -o game2048 Game_2048.cpp
   ```
   **For Windows(Using MingW)**
   ```bash
   g++ -std=c++17 -o game2048 Game_2048.cpp
   ```
If you're using Visual Studio, create a new C++ project, add the .cpp file to the project, and build it through Visual Studio's IDE.

4. Run the game:
   **For macOS/Linux**
   ```bash
   ./game2048
   ```
   **For Windows**
   ```bash
   game2048.exe
    ```

---


## 🎥 Gameplay Demo

Watch the 2048 gameplay in action:

[![2048 Gameplay](https://youtu.be/GRJFz3mAGac)](https://youtu.be/GRJFz3mAGac)

---



## 🤝 Contributing

Contributions are welcome! Feel free to submit a pull request or open an issue for suggestions.

---


## ❤️ Acknowledgements

- Inspired by the original [2048 game](https://2048game.com/).
- Special thanks to the open-source community for guidance and support.

---

Enjoy playing Game 2048! 🚀


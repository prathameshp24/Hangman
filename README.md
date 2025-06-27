````markdown
# Hangman — Classic Word-Guessing Game in C++
A faithful command-line remake of the timeless **Hangman** game, written from scratch in modern C++.  
Guess the hidden word one letter at a time, rack up streaks, and try not to let your stick-figure friend meet an untimely end!

---

## 🚀 Quick Start

```bash
# 1 · Clone the repository
git clone https://github.com/prathameshp24/Hangman.git
cd Hangman

# 2 · Compile
g++ main.cpp Player.cpp Word.cpp Game.cpp -o hangman

# 3 · Play!
./hangman
````

> **Prerequisites:** any C++17-compatible compiler (tested with **g++ 13**).
> **OS:** Linux/macOS/Windows (via MinGW or WSL).

---

## 🗺️ Project Roadmap / Future Tasks

| Step | Feature to Add                | Skills Used   |
| ---- | ----------------------------- | ------------- |
| 1    | Persistent Player Profiles    | File I/O      |
| 2    | Word Bank & Difficulty Levels | Parsing       |
| 3    | Hangman ASCII Art (Display)   | Fun Logic     |
| 4    | Leaderboard                   | Sorting       |
| 5    | Save/Resume Games             | Serialization |
| 6    | Multiplayer Mode              | Game Logic    |
| 7    | GUI (Optional)                | SFML / Qt     |

### ✏️ Immediate Next Goals

1. **Word Bank** – curate a text file of words, grouped by difficulty.
2. **Enhanced Console Window** – show a progressively drawn ASCII gallows & stick-figure.
3. **File Management** – store player stats and finished-game summaries in CSV/JSON.

---

## 📂 Repository Layout

```
Hangman/
├── Game.cpp      # Game loop & core logic
├── Player.cpp    # Player class (name, score, lives)
├── Word.cpp      # Word selection & letter-reveal helpers
├── main.cpp      # CLI entry-point
└── …             # future assets (word bank, saves, art)
```

---

## 🤝 Contributing

Pull requests are welcome! Please open an issue first to discuss major changes.

1. Fork → Clone → Create branch (`git checkout -b feature/foo`)
2. Commit with clear messages
3. `git push` and open a PR

---

## 📜 License

This project is released under the **MIT License** — see `LICENSE` for details.

```
```

# C++ Task Tracker

A beginner-friendly command-line task tracker built with **C++17**. This repository is designed for practicing real GitHub collaboration: reading documentation, understanding an issue, creating a branch, making a focused change, and opening a pull request.

## Current features

- Add a task
- List all tasks
- In-memory storage (tasks reset when the program exits)

## Project structure

```text
demo-practice/
├── README.md
├── CONTRIBUTING.md
├── .gitignore
└── src/
    └── main.cpp
```

## Requirements

- A C++17-compatible compiler (GCC, Clang, or MSVC)
- Git

Check your compiler:

```bash
g++ --version
```

## Build and run

From the repository root:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o task-tracker
./task-tracker
```

On Windows, run `task-tracker.exe` after compiling.

## How to use

Choose an option from the menu:

1. Add task
2. List tasks
3. Mark task as completed (currently a practice issue)
4. Exit

## Contribution workflow

1. Read this README and [CONTRIBUTING.md](CONTRIBUTING.md).
2. Open an issue and understand its acceptance criteria.
3. Create a branch from `main`, for example: `feature/mark-task-completed`.
4. Implement only the requested change.
5. Compile and test your changes.
6. Commit with a clear message.
7. Push your branch and open a Pull Request against `main`.
8. In the PR description, reference the issue using `Closes #1` (replace the number if needed).

Please do not commit the compiled executable.

## Learning goals

This project is intentionally small. Use it to practice C++ functions, vectors, input validation, Git branches, commits, issues, and pull requests.

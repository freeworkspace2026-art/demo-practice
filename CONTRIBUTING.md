# Contributing

Thanks for practicing open-source collaboration with this repository!

## Before you start

- Read the project [README](README.md).
- Check the open issues and choose one that is not already being worked on.
- Ask a question in the issue if any requirement is unclear.

## Development rules

- Use C++17.
- Keep functions small and give variables meaningful names.
- Validate user input; do not let invalid input crash the program.
- Keep changes focused on the issue.
- Compile with warnings enabled:

  ```bash
  g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o task-tracker
  ```

## Branch and pull request

Create a branch for your work:

```bash
git switch main
git pull origin main
git switch -c feature/short-description
```

After implementing and testing:

```bash
git add .
git commit -m "Add task completion feature"
git push -u origin feature/short-description
```

Open a pull request into `main`. Explain what changed, how you tested it, and link the issue (for example, `Closes #1`).

Do not merge your own PR until it has been reviewed. For this practice repository, the goal is to experience the review process too.

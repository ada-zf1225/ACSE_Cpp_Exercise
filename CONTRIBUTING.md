# Contributing Guide

## Workflow
1. Open an issue describing scope and acceptance criteria.
2. Create a branch from `main` using naming rules in `docs/PROJECT_MANAGEMENT.md`.
3. Implement with focused commits.
4. Run checks locally:
   ```bash
   cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
   cmake --build build
   ctest --test-dir build --output-on-failure
   ```
5. Open a PR with the template and link the issue.

## Commit Message Style
Use concise conventional-style prefixes:
- `feat:`
- `fix:`
- `refactor:`
- `docs:`
- `test:`
- `chore:`

Example:
`feat: add practical_01 vector utility implementation`

## C++ Style
- Follow `.clang-format`
- Prefer clear naming over abbreviations
- Keep functions small and testable

# ACSE C++ Exercise

Structured solutions and notes for **Advanced Programming C++ practicals**.

This repository is set up as a professional learning project:
- reproducible builds with CMake
- automated checks with GitHub Actions
- issue/PR templates for disciplined collaboration
- explicit project management workflow (milestones, labels, progress tracking)

## Objectives
- Solve each practical exercise with clean, testable C++ code
- Practice engineering habits beyond coding:
  - scoped issues
  - small PRs with review notes
  - CI-first quality checks
  - changelog-style progress tracking

## Repository Structure
```text
.
├── .github/
│   ├── ISSUE_TEMPLATE/
│   ├── workflows/
│   └── pull_request_template.md
├── docs/
│   ├── PROJECT_MANAGEMENT.md
│   └── ROADMAP.md
├── exercises/
│   └── README.md
├── include/
├── src/
├── tests/
├── CMakeLists.txt
├── CONTRIBUTING.md
└── .clang-format
```

## Quick Start
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
ctest --test-dir build --output-on-failure
```

## Development Workflow
1. Create an issue for one focused exercise/task.
2. Create a branch: `feat/<issue-id>-short-name` or `fix/<issue-id>-short-name`.
3. Commit in small steps with clear messages.
4. Open a PR using the template and reference the issue (`Closes #<id>`).
5. Merge only after CI passes.

Detailed process: see [docs/PROJECT_MANAGEMENT.md](docs/PROJECT_MANAGEMENT.md).

## Learning Log Recommendation
For each solved exercise, record:
- problem understanding
- design choices and trade-offs
- complexity and pitfalls
- test strategy and edge cases

You can maintain this in PR descriptions and/or a weekly summary issue.

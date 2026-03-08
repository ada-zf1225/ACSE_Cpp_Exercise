## Summary
- What does this PR change?
- Why is this change needed?

## Linked Issue
Closes #

## Changes
- [ ] Implementation
- [ ] Tests
- [ ] Docs

## Validation
Commands run locally:
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
ctest --test-dir build --output-on-failure
```

## Review Checklist
- [ ] Scope matches linked issue
- [ ] Edge cases considered
- [ ] Naming/readability are clear
- [ ] CI passes

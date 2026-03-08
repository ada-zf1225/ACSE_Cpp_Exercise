# GitHub Project Management Guide

This document defines a lightweight but professional workflow for this repository.

## 1. Labels
Create these labels in GitHub:
- `type:feature`
- `type:bug`
- `type:refactor`
- `type:docs`
- `priority:high`
- `priority:medium`
- `priority:low`
- `status:blocked`
- `status:ready`
- `area:build`
- `area:test`
- `area:exercise`

## 2. Milestones
Use milestone buckets by practical batch:
- `Practical 1-3`
- `Practical 4-6`
- `Practical 7-9`
- `Quality Pass`

Each issue must belong to one milestone.

## 3. Branch Naming
- `feat/<issue-id>-short-name`
- `fix/<issue-id>-short-name`
- `docs/<issue-id>-short-name`
- `chore/<issue-id>-short-name`

## 4. Issue Rules
- One issue = one clear outcome.
- Add acceptance criteria checklist.
- Link issue to milestone and labels.

## 5. PR Rules
- Keep PRs small (ideally < 300 lines net change for learning tasks).
- Link issue with `Closes #<id>`.
- Include test evidence (local commands + CI result).
- Require at least one review pass (self-review checklist if solo).

## 6. Suggested GitHub Project Board
Columns:
- `Backlog`
- `Ready`
- `In Progress`
- `In Review`
- `Done`

Card movement policy:
- issue created -> `Backlog`
- scoped and accepted -> `Ready`
- branch opened -> `In Progress`
- PR opened -> `In Review`
- merged -> `Done`

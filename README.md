# SE-Project
# Lab 01: Software Development Challenges

## Overview
This directory contains the deliverables and core C++ baseline setup for Lab 01 of the ClubHub project. The objective of this lab is to establish team roles, analyze historical software engineering failures, define product requirements, and set up a clean C++20 project structure built with CMake.

---

## Lab-01 Files & Deliverables

| File Name | Description |
| :--- | :--- |
| [`team-charter.md`](team-charter.md) | Outlines team members, roles, GitHub accounts, measurable working agreements, and communication/decision-making rules. |
| [`decisions.md`](decisions.md) | The initial team decision log tracking major project choices starting with decision #1. |
| [`failure-case-analysis.md`](failure-case-analysis.md) | Features a multi-event timeline, a Mermaid causal chain flowchart, root causes mapped to Fred Brooks's essential difficulties, and preventive practices. |
| [`problem-statement.md`](problem-statement.md) | Defines the core project problem, vision statement, today's workarounds, and project scope boundaries. |
| [`stakeholders.md`](stakeholders.md) | Lists all project stakeholders (minimum of 7) and highlights the top 3 most critical roles. |
| [`failure-risks.md`](failure-risks.md) | Brainstorms 5 potential project failure risks linked to Chapter 01 topics along with their corresponding mitigations. |
| [`communication-overhead.md`](communication-overhead.md) | Analyzes communication path math for a 4-person versus 5-person team, proposes overhead-reduction practices, and includes a signed team reflection. |

---

## Inputs Reused & Change Log
* **Inputs Reused:** Base project structure template and lab instruction guidelines provided for ClubHub.
* **Change Log:**
  * Initialized repository layout and added root `CMakeLists.txt`.
  * Implemented the C++20 banner module (`banner.hpp` and `banner.cpp`) and executable entry point (`main.cpp`).
  * Completed all required documentation files for team chartering, problem definition, and failure analysis.

---

## Build & Execution Instructions

To compile and run the baseline C++ program from the repository root:

1. **Configure CMake:**
   ```bash
   cmake -S . -B build



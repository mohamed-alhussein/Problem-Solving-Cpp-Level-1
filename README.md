# C++ Problem Solving & Projects

![C++](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)
![Problems](https://img.shields.io/badge/problems-100%2F100-success)
![Projects](https://img.shields.io/badge/projects-1%2F2-blue)

> C++ problem solving and practice, from easy to advanced, followed by projects that apply the same skills.

## Table of Contents

- [About](#about)
- [Goals](#goals)
- [Progress](#progress)
- [Projects](#projects)
- [Skills Practiced](#skills-practiced)
- [Solutions Index](#solutions-index)
- [How to Run](#how-to-run)
- [Author](#author)

## About

This repository documents my path in learning programming logic and
algorithmic thinking through C++. Each problem lives in its own folder,
so every solution can be read, compiled, and tested independently.
Projects are built on top of the same skills and live in this repository too.

## Goals

- [x] Solve 100 problems
- [ ] Build 2 projects

## Progress

| Milestone | Status |
|-----------|--------|
| Problems 01–100 | ✅ Completed |
| Project 1: Rock Paper Scissors | ✅ Completed |
| Project 2 | 🔄 Planned |

## Projects

### 1. Rock Paper Scissors

A console game where the player competes against the computer over
several rounds. The main problem was broken down into smaller problems,
and each one is solved by its own function.

**Features**

- The player chooses the number of rounds (1 to 10)
- The computer picks its choice randomly
- Round-by-round summary: round number, player choice, computer choice, and round winner
- Screen color changes according to the winner: green for the player, yellow for a draw, and red with a bell sound when the computer wins
- Final result: total rounds, player wins, computer wins, draws, and the final winner
- Input validation for the number of rounds and the player's choice
- Option to play again

**Concepts applied**

- Functions and procedures (void functions)
- Structs to group round data and game results
- Enums to represent game choices and winners
- Random number generation
- Loops and control flow

**Program flow**

```text
main
 └── StartGame
      ├── PlayGame (for each round)
      │    ├── ReadPlayerChoice
      │    ├── GetComputerChoice
      │    ├── WhoWonTheRound
      │    └── PrintRoundResult
      ├── ShowGameOverScreen
      └── ShowFinalResultGame
```

[View Project](Project01)

### 2. Coming soon

## Skills Practiced

- Algorithms and problem decomposition
- Control flow, loops, and functions
- Modeling data with structs and enums
- Writing clean, readable C++ code
- Version control with Git and GitHub

## Solutions Index

| Range | Solutions |
|-------|-----------|
| 01–10 | [01](Problem%201) [02](Problem%202) [03](Problem%203) [04](Problem%204) [05](Problem%205) [06](Problem%206) [07](Problem%207) [08](Problem%208) [09](Problem%209) [10](Problem10) |
| 11–20 | [11](Problem11) [12](Problem12) [13](Problem13) [14](Problem14) [15](Problem15) [16](Problem16) [17](Problem17) [18](Problem18) [19](Problem19) [20](Problem20) |
| 21–30 | [21](Problem21) [22](Problem22) [23](Problem23) [24](Problem24) [25](Problem25) [26](Problem26) [27](Problem27) [28](Problem28) [29](Problem29) [30](Problem30) |
| 31–40 | [31](Problem31) [32](Problem32) [33](Problem33) [34](Problem34) [35](Problem35) [36](Problem36) [37](Problem37) [38](Problem38) [39](Problem39) [40](Problem40) |
| 41–50 | [41](Problem41) [42](Problem42) [43](Problem43) [44](Problem44) [45](Problem45) [46](Problem46) [47](Problem47) [48](Problem48) [49](Problem49) [50](Problem50) |
| 51–60 | [51](Problem51) [52](Problem52) [53](Problem53) [54](Problem54) [55](Problem55) [56](Problem56) [57](Problem57) [58](Problem58) [59](Problem59) [60](Problem60) |
| 61–70 | [61](Problem61) [62](Problem62) [63](Problem63) [64](Problem64) [65](Problem65) [66](Problem66) [67](Problem67) [68](Problem68) [69](Problem69) [70](Problem70) |
| 71–80 | [71](Problem71) [72](Problem72) [73](Problem73) [74](Problem74) [75](Problem75) [76](Problem76) [77](Problem77) [78](Problem78) [79](Problem79) [80](Problem80) |
| 81–90 | [81](Problem81) [82](Problem82) [83](Problem83) [84](Problem84) [85](Problem85) [86](Problem86) [87](Problem87) [88](Problem88) [89](Problem89) [90](Problem90) |
| 91–100 | [91](Problem91) [92](Problem92) [93](Problem93) [94](Problem94) [95](Problem95) [96](Problem96) [97](Problem97) [98](Problem98) [99](Problem99) [100](Problem100) |

## How to Run

Each folder contains a standalone C++ program. Compile it with any C++
compiler, for example g++:

```bash
g++ -std=c++17 file.cpp -o program
./program
```

## Author

**Mohamed Al-Hussein**
Information Engineering Student

[GitHub Profile](https://github.com/mohamed-alhussein)



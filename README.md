# Dante

Welcome to **Dante**.

Where you embark on an intricate journey through the creation and solving of mazes.

This project invites you to master the complexities of maze generation and optimization, mirroring the challenges found in the nine circles of Hell.

## Language and Tools 🛠️

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

- **Language:** C
- **Compilation:** Via Makefile, including `re`, `clean`, and `fclean` rules.
- **Binary Names:** `generator`, `solver`

## Project Overview 🔎

This project delves into the realm of mazes, each type symbolizing a circle from Dante's Inferno. Your task involves two primary objectives: generating both perfect and imperfect mazes, and then solving them with efficiency and precision.

### Usage

#### Maze Generator
`./generator width height [perfect]`

- **width:** Maze width
- **height:** Maze height
- **[perfect]:** Optional flag. If omitted, an imperfect maze is generated.

#### Maze Solver
`./solver maze.txt`

- **maze.txt:** The file containing the maze to solve.

### Examples

#### Example 1 (Generator)
`Input: ./generator 24 6 perfect`<br>
`Output:`<br>
```
*****XX****X******** XXXX
XX ****** XX*** XXXXX *** XXX
XX*** XXXX** XXXXX **** XXXX
XX*** XXXXXXXXXXXXXX ****X
***** XXXXXX ****XX*** XXXX
XX ************* XXXX *****
```
#### Example 1 (Solver)
`Output:`<br>
```
oooooXXooooXooooooooXXXX
XX** ooooXXoooXXXXX*o*XXX
XX*** XXXX** XXXXX *** oXXXX
XX*** XXXXXXXXXXXXXXo ***X
***** XXXXXX ****XX**oXXXX
XX ************* XXXXooooo
```

#### Example 2 (Generator)
`Input: ./generator 15 10`<br>
`Output:` Generates a 15x10 imperfect maze.

#### Example 3 (Solver)
`Input: ./solver generated_maze.txt`<br>
`Output:` Solves the maze provided in `generated_maze.txt`.

*Note: The complexity of the maze increases with its size. The generated mazes should be solvable.*

## Project Circles and Goals 🎯

- **Third Circle (Gluttony):** Generate a perfect maze with `generator`.
- **Fourth Circle (Greed and Extravagance):** Create an imperfect maze using `generator` without the perfect flag.
- **Fifth Circle (Wrath):** Solve the mazes using `solver`.
- **Further Circles:** Focus on optimization, heuristic approaches, and maze complexity analysis.

## Installation and Usage 💾

1. Clone the repository.
2. Compile the program using the provided Makefile.
3. Use `generator` to create mazes and `solver` to solve them.
4. For detailed guidelines, refer to `dante.pdf`.

## License ⚖️

This project is released under the MIT License. See `LICENSE` for more details.

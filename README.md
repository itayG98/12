# Adjacency Matrix Path Checker 🎯🚀🔍

## Overview 🌍🔗📊
This program checks for paths between nodes in an **NxN adjacency matrix** representation of a graph. Users input the matrix values and can repeatedly query whether a path exists between two specified nodes. The program continues until `-1 -1` is entered or EOF is reached. ✅🛑📉

## Features 🏆🔢📌
- User inputs values for an **NxN adjacency matrix**.
- Matrix is printed for reference.
- Users can check for a path between two nodes by entering their indices.
- The program validates the indices and computes connectivity using the `path` function.
- Exit the program with `-1 -1` or EOF. 🏁📎🎯

## Compilation and Execution 💻⚙️🔨
### Compilation 🎯📜💡
To compile the program, use:
```sh
gcc -o adjacency_checker main.c adjacency_utils.c -Wall -Wextra
```

### Execution 🚀📂📢
Run the compiled program:
```sh
./adjacency_checker
```

## Usage 🔄📊📌
1. Enter values for the **NxN adjacency matrix**.
2. The program prints the matrix for reference.
3. Enter two indices to check if a path exists between them.
4. Repeat until you enter `-1 -1` or EOF. 🔄📊✅

## Example Run 🏁📉📋
```
Enter value for 3X3 matrix
Enter value for position (0, 0): 0
Enter value for position (0, 1): 1
Enter value for position (0, 2): 0
Enter value for position (1, 0): 0
Enter value for position (1, 1): 0
Enter value for position (1, 2): 1
Enter value for position (2, 0): 1
Enter value for position (2, 1): 0
Enter value for position (2, 2): 0

Adjacency Matrix:
     0    1    2
  -----------------
  0 |  0    1    0
  1 |  0    0    1
  2 |  1    0    0

Enter start index:
1
Enter end index:
2
Check path from: 1 to 2...
Path exists: true
```

## Functions 📝📚🔧
### `print_matrix(Adjmant arr)` 🖨️📋🔢
Prints the adjacency matrix in a formatted manner.

### `Boolean validate_index(int index)` ✅📏📌
Validates if the index is within the matrix bounds.

### `Boolean path(Adjmant adj, int u, int v)` 🔍🔄🚀
Recursively checks if a path exists between two nodes.

## Dependencies 📦🔗🛠️
- `stdio.h`
- `adjmant_types.h`
- `adjacency_utils.h` 📜📦✅

## Exit Conditions 🚪❌🏁
- Enter `-1 -1` to terminate.
- EOF input also exits the program. 🔄📴📌

## Notes 📌📝⚠️
- The program assumes `N` is defined in the included header files.
- The recursive `path` function checks connectivity.
- Indices must be **within valid range** to avoid unexpected behavior. 🚦📢✅

## Author ✍️👨‍💻📖
This program is developed as part of **20465 course assignment**. 📚🎓📜


# C Language Lessons

This repository is a record of my lessons and practice programs while learning
the C programming language. The work was completed over the span of **April
through August 2024**.

The examples are intentionally small and progressive. Some are polished
practice programs, while others are early experiments that show how my
understanding developed. The original assignment copies have been retained
with an `assignment_` prefix so that the learning history is not lost.

## Learning chapters

The C files are organized by the main concept they practice:


| Chapter | What it covers |
| --- | --- |
| [`01-basics`](./01-basics) | Hello world, output, formatting, and simple expressions |
| [`02-input-and-variables`](./02-input-and-variables) | Variables, keyboard input, characters, and basic data handling |
| [`03-arithmetic-and-math`](./03-arithmetic-and-math) | Arithmetic, areas, square roots, powers, and formula-based programs |
| [`04-conditionals`](./04-conditionals) | `if`, `else if`, `else`, comparisons, ranges, and decisions |
| [`05-switch-statements`](./05-switch-statements) | `switch` menus, grade bands, calculators, and lookup tables |
| [`06-loops`](./06-loops) | `for`, `while`, `do while`, and repeated calculations |
| [`07-functions`](./07-functions) | Defining and calling functions, including a recursive sum |
| [`08-projects`](./08-projects) | Larger experiments that combine multiple C concepts |

Each chapter contains source files whose names describe the program more
clearly than the original filenames did.

## Building and running a lesson

The programs are standalone examples. Compile one source file from the
repository root with a C compiler such as GCC:

```text
gcc 01-basics/hello-world.c -o build/hello-world.exe
build/hello-world.exe
```

Programs that use functions from the math library may need `-lm` on some
platforms:

```text
gcc 03-arithmetic-and-math/powers-and-square-root.c -o build/powers.exe -lm
```

The existing Windows executables are kept together in [`build`](./build).
They are generated artifacts rather than source code, so the entire directory
is ignored by Git. Rebuild an executable when you want to test a renamed
lesson.

## Repository notes

- `archive/assignments-original.zip` is the original assignment archive.
- The `assignment_` files preserve the duplicate assignment copies that were
  present before the repository was organized.
- `bootstrap/` contains existing Bootstrap assets and is not part of the C
  lessons.
- Some early examples contain beginner-level mistakes or incomplete
  experiments. They are kept as learning artifacts rather than silently
  rewritten.

## Suggested order

Start with `01-basics`, then move through the chapters in number order. The
conditional and switch chapters contain the largest collection of small
problem-solving exercises. Finish with `07-functions` and `08-projects` after
the control-flow examples feel comfortable.

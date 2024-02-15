# SequenceChecker

SequenceChecker is a simple C program that checks whether a given input word forms an increasing sequence of characters or digits.

## Usage

1. Compile the program using any C compiler:

```
gcc -o sequence_checker sequence_checker.c
```

2. Run the compiled program:

```
./sequence_checker
```

3. Enter a word when prompted.

4. The program will output whether the entered word forms an increasing sequence or not.

## Example

Enter a word: abcdef
The word "abcdef" is an increasing sequence.

## Functionality

The program defines a function `isincseq` that takes a character array as input and returns 1 if the array forms an increasing sequence and 0 otherwise.


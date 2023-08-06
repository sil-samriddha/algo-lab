# Aim of the program
### Write a program in C to find GCD of two numbers using recursion. Read all pair of numbers from a file and store the result in a separate file.
> *__NOTE :__* Source file name and destination file name taken from command line arguments. The source file must contain at least `20` pairs of numbers.

## FILE INPUT
Give the contents of the input disc file `inGcd.dat`
```
8 12 20 45 30 80
```
## TERMINAL INPUT
```console
$ gcc lab2q2.c -o lab2q2.out
$ ./lab2q2.out inGcd.dat outGcd.dat
```
## FILE OUTPUT
Display the gcd stored in the output file `outGcd.dat`
```
The GCD of 8 and 12 is 4
The GCD of 20 and 45 is 5
The GCD of 30 and 80 is 10
```

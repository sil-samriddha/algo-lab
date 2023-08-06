# Aim of the program
### Write a program in C to convert the first `n` decimal numbers of a disc file to binary using recursion. Store the binary value in a separate disc file.
> *__NOTE :__* Read the value of `n`, source file name and destination file name from command line arguments. Display the decimal numbers and their equivalent binary numbers from the output file. 

## FILE INPUT
Give the contents of the input disc file `inDec.dat` 
```
30 75 2564
```
## TERMINAL INPUT
```console
$ gcc lab2q1.c -o lab2q1.out
$ ./lab2q1.out 3 inDec.dat outBin.dat
```
## FILE OUTPUT
Contents of the output disc file `outBin.dat` as
```
The binary equivalent of 30 is 11110
The binary equivalent of 75 is 1001011
The binary equivalent of 2564 is 101000000100
```

# Aim of the program: 
### Huffman coding assigns variable length codewords to fixed length input characters based on their frequencies or probabilities of occurrence. Given a set of characters along with their frequency of occurrences, write a c program to construct a Huffman tree.
> _Note#_
> - Declare a structure `SYMBOL` having members `alphabet` and `freq`. Create a Min-Priority Queue, keyed on frequency attributes.
> - Create an array of structures where size = number of alphabets.

## INPUT
```CONSOLE
Enter the number of distinct alphabets: 6
Enter the alphabets : a b c d e f
Enter its frequencies: 45 13 12  16 9 5
```

## OUTPUT
```CONSOLE
In-order traversal of the tree (Huffman): a c b f e d
```

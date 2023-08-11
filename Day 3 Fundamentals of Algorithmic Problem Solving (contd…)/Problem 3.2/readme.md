# AIM OF THE PROBLEM
### Write a menu driven program to sort a list of elements in <u>ascending order</u> using <u>Insertion Sort</u> technique. The nature of the input data is choice based and a distinct file is considered for each choice. The sorted elements can be stored in a separate output file. After sorting display the content of the output file along <u>with number of comparisons</u>. Based on the number of comparisons, conclude the input scenario is either <u>best or worst case</u>.

> _Note#_
> - Number of elements in each input file should be between `300` to `500` entries.
> - __For ascending order:__ Read data from a file `“inAsce.dat”` having content `10 20 30 40`, Store the result in `“outInsAsce.dat”`.
>- __For descending order:__ Read data from a file `“inDesc.dat”` having content `90 80 70 60`, Store the result in `“outInsDesc.dat”`.
> - __For random data:__ Read data from a file `“inRand.dat”` having content `55 66 33 11 44`, Store the result in `“outInsRand.dat”`

## TERMINAL INPUT
```console
MAIN MENU (INSERTION SORT)
1. Ascending Data
2. Descending Data
3. Random Data
4. ERROR (EXIT)

Enter a choice : 1
```
## TERMINAL OUTPUT
```console
Taking input from 'inAsce.dat'

Before sorting
0 1 2 3 4 ...
----------------------
No Shifting
----------------------
No of comparisons : 299
Scenario : Best Case
----------------------
After sorting
0 1 2 3 4 ...
Storing output in 'outInsAsce.dat'
```
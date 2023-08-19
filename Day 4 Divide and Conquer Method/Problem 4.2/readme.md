# AIM OF THE PROBLEM
### Write a menu driven program to sort a list of elements in ascending order using `Quick Sort` technique. Each choice for the input data has its own disc file. A separate output file can be used for sorted elements. After sorting display the content of the output file along with number of comparisons. Based on the partitioning position for each recursive call, conclude the input scenario is either best-case partitioning or worst-case partitioning.

> _Note #_
>- The worst-case behavior for `quicksort` occurs when the partitioning routine produces one subproblem with `n-1` elements and one with `0` elements. The best-case behaviour
occurred in most even possible split, `PARTITION` produces two subproblems, each of size no more than `n/2`.
>- Number of elements in each input file should vary from `300` to `500` entries.
>- __For ascending order:__ Read data from a file `inAsce.dat` having content `10 20 30 40...`, Store the result in `outQuickAsce.dat`.
>- __For descending order:__ Read data from a file `inDesc.dat` having content `90 80 70 60...`, Store the result in `outQuickDesc.dat`.
>- __For random data:__ Read data from a file `inRand.dat` having content `55 66 33 11 44...`, Store the result in `outQuickRand.dat`

## INPUT
```console
MAIN MENU (QUICK SORT)
1. Ascending Data
2. Descending Data
3. Random Data
4. ERROR (EXIT)
```

## OUTPUT
```console
Enter option :
1

No of elements : 300
No of comparisons : 299
Scenerio : Worst Case
Execution time : 0.000232 seconds
```

```console
Enter option :
3

No of elements : 300
No of comparisons : 196
Scenero : Best Case
Execution time : 0.000019 seconds
```

TOPIC:DYNAMIC MEMORY                                   DATE 28-11-2022




1. Write a flow chart for the below problem and write program:

Write a program to input n numbers and print the largest and smallest numbers out of them.

Eg., 3,23,56,34,78,45,26,90,68,77
Biggest Number is 90
Smallest Number is 3

2) Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print.

Try to convert the size to a variable and do it for n elements of the array using variable sized 
arrays.

3) write a function that takes an array and its size as input and returns biggest number index as output. And print the biggest number based on the function call.

4) Create the array dynamically, read the data for the array, and use the above function in Q3 to find the biggest number in that array.

5) Write a search function that will take an array , its size and an element to search as inputs. Search that element in the array, and return the index of the found element. If not found, return -1.

Call this function to find the element in a statically created array. Use the same function to find an element in a dynamically created array.

6) Given an array of n integers where n>1, return an array of same size an input array where at every index of the output array should contain the product of all elements in the array except the element at the given index. print the array in calling function. Create this array in called function dynamically.
Example:
arr[] = {10, 4, 1, 6, 2}
prod[] = {48,120,480,80,240}

7) create an array dynamically, read data, and sort it and print it. Write a bubblesort function for that based on below steps.

•Run a nested loop. The outer loop will loop through n-1 times, if there are n elements to be sorted.
•The inner loop just compares adjacent elements and will swap them if they are not in correct order.
•Starting from the first index, compare the first and the second elements. If the first element is greater than the second element, they are to be swapped.
Now, compare the second and the third elements. Swap them if they are not in order.
The above process goes on until the last element.
•The same process goes on for the remaining iterations. After each iteration, the largest element among the unsorted elements is placed at the end.
In each iteration, the comparison takes place up to the last unsorted element.
The array is sorted when all the unsorted elements are placed at their correct positions.
8) 
" Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers. Arrays should not be sorted after merging. arrays should always stay sorted while they are being merged into another array.
Assume that the input arrays are sorted.
eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20"

9) Implement your own itoa function and return the string from the function. Print the result in main.
eg., if input is 345 (integer) output should be a string "345" 
itoa function is a library function that converts a number to a numeric string.

10) 
Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.
 eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
 output : kerraaya



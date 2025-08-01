# Arrays-And-Strings-In-CPP
## Aim
To study and implement arrays and strings in C++.
## Tools
Visual Studio Code
## Theory
### What are arrays?
An array is a collection of elements of the same type placed in contiguous memory locations. It allows you to store multiple values under a single name and access them using an index.Arrays are one of the most basic and commonly used data structures in C++ programming.

<img width="517" height="260" alt="image" src="https://github.com/user-attachments/assets/85f8aac5-8302-41b2-a8ff-c360e5d0a7e3" />

<img width="517" height="260" alt="image" src="https://github.com/user-attachments/assets/d5dbac8b-f957-4afe-970c-59e4d9de8e27" />

### What are strings?
In C++, strings are sequences of characters that are used to store words and text. They are also used to store data, such as numbers and other types of information in the form of text. Strings are provided by <string> header file in the form of std::string class.C++ provides some inbuilt functions which are used for string manipulation, such as the strcpy() and strcat() functions for copying and concatenating strings.
### Difference between character arrays and strings
<img width="1048" height="502" alt="image" src="https://github.com/user-attachments/assets/414be30f-ab1b-4f05-b842-af29729d5563" />

## Algorithm

### Element Search In Arrays
1. Start

2. Define an integer array of size 5 with fixed values.

3. Ask user to input a number to search.

4. Loop through the array:

5. If element matches, print "Element found" and its position.

6. Set found = true and exit loop.

7. If found is still false, print "Element not found".

8. End

### Finding Max & Min Element In Arrays
1. Start

2. Ask user for array size n.

3. Declare array of size n.

4. Input n elements starting from index 1 (not ideal, but matches code).

5. Display all array elements.

6. Loop to find maximum element by comparing and updating arr[0].

7. Print maximum element.

8. Loop again to find minimum using the same method on arr[0].

9. Print minimum element.

10. End
 
### Reversing A String
1. Start

2. Initialize a string variable with "Good Morning".

3. Set count = 0.

4. Traverse the string until null character ('\0') to count its length.

5. Print the count.

6. Loop from count down to 0 and print each character to reverse the string.

7. End
   
### Checking String For Palindrome
1. Start

2. Input a string from the user and store it in a variable str.

3. Get the length of the string using str.length() and store it in len.

4. Initialize a boolean flag isPalindrome as true.

5. Use a for loop from i = 0 to i < len / 2: . In each iteration, compare str[i] with str[len - 1 - i]

6. If the characters are not equal it will set isPalindrome = false and break the loop

7. After the loop if isPalindrome is true, output: "The string is a palindrome."

8. Else, output: "The string is not a palindrome."

9. End

## Conclusion
We learnt to do different operations on strings and arrays like reversing, finding length,searching element , etc.

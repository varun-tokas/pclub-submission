# Xoradd</br>
---
Arnav recently had his birthday, and for his birthday, he was gifted an array, consisting of integers $a_1,a_2,a_3,....,a_{2^n}$. In the first operation he calculates the the bitwise XOR of $a_1 and a_2, a_3 and a_4,..% and so on, and in the second he calculates the sum of each pair of these bitwise XORs $b_1,b_2,b_3,...$ as $b_1+b_2$, $b_3+b_4$ and so on, he alternates between calculating the bitwise XORs and sums of the results obtained in each iteration, until only one element remains, the Xoradd. However, his mischievous cat Judy, keeps on interfering with the game. In each interference, the cat either replaces an element with a number of its choice, or if it feels like it, it replaces every number in the initial array with their bitwise XORs with a number of its choosing, and queries Arnav about the current Xoradd. Since Arnav doesn't want to lose to his cat, help Arnav calculate the new Xoradd of the array each time his cat messes up the initial array.
## Input</br>
---
The input consists of an integer $n <=17$, followed by $2^n$ numbers, the array $a$, where all elements are less than $100000$. This is followed by a number $q<=100000$, the number of times the cat messes up the array. $q$ lines follow, each representing a query of the form $1$ $i$ $x$ or $2$ $x$, with the first query replacing $a_i$ with $x$, and the second replacing all elements in the array with $a_i$ xor $b$. Here $1<=$ i $<= 2^n$ and $x$ does not exceed $100000$ in either query. 
## Output</br>
---
Output $q$ lines, the Xoradd after each query.
## Limits</br>
---
Time limit: 2.5 seconds</br>
Memory limit: 256 megabytes</br>
## Sample test cases</br>
---
### Input</br>
1</br>
2 5</br>
2</br>
1 1</br>
2 1</br>
</br>
### Output</br>
4</br>
0</br>
</br>
### Input</br>
2</br>
1 2 3 4</br>
1</br> 
2 1 </br>
</br>
### Output </br>
10</br>

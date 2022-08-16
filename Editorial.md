First notice that the second query can never change the Xoradd, since  ( $a$ xor $b$ ) xor ( $c$ xor $b$ ) is equal to $a$ xor $c$. The first operation is xor, hence from the first operation onwards, every value is the same. This means there is only one operation we really need to think about, which is updating the Xoradd once we change an element of $a_i$.</br>
Consider the fact that since $2^n$ elements are given, we can store each element in an array $p$ of size $2^{n+1}$, where $p_{n+i}$ is equal to $a_{i}$. Calculate the elements of the array using the relation $p_i = op(p_{2i},p_{2i+1})$, where $op$ is the operation, and can be sum or xor. This works since each successive result occured by playing the game considers only two previous values, and connecting each result with the values that were operated upon to give the result will form a balanced binary tree. Hence we can create this tree in the form of an array, since the tree has n levels, the array size will be $2^{n+1}$, which passes the ML. The Xoradd will be $p_1$.</br>
It remains to update the values in this tree after every query of the first type. We can do this setting $p_{k}$ to the new value and updating $p_{\frac{k}{2}}$ repeatedly with the necessary operation, until $k$ is 1. The respective operation can be determined by running a loop from $1$ to $n$, with the operation being xor if the counter is odd, and sum if it is even. The final time complexity is $O(2^{n+1}+qn)$.</br>
Note that fast I/O is necessary to pass the problem under given time constraints, since a large number of I/O operations are being carried out.
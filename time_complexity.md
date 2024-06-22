#Time Complexity

<hr>
<p>Time complexity of the total amount of time a algorithm takes to solve a problem.It is measured in terms of number of computational steps.</p>

let's take an example<br>

## example number 1:

<hr>
let us take a for loop<br>
for(i = 0 ; i < n ; i++){<br>
    statement;<br>
}<br>

here the statement in the loop gets executed n times and the condition for the loop before it halts is checked n+1 times at n+1th iteration the condition 'i < n' is not fullfilled and the loop halts.<br>
So time complexity = O(n).<br>

Note that:- Time complexity is not O(n) because the statement or block of code inside the loop was executed n times, it was O(n) because the degree of polymonial that represents number of time the block of code executes is 1, hence O(n^1) = O(n).<br>

To better understand this let's take another example:<br>
<br>

## example number 2:<br>

<hr>
for(i = 1 ; i < n ; i = i+2){<br>
    statement;<br>
}<br>

here the statement inside the loop is executed n/2 times. The degree of that polymonial is still 1, so the time complexity of this algorithm is also O(n^1) = O(n).<br>

## example number 3:

<hr>

for(i = 0 ; i < n ; i++){<br>
for(j = 0 ; j < n ; j++){<br>
statement;<br>
}<br>
}<br>

here the statement inside the nested loops gets executed for n\*n times as the loop inside the main loop runs n times and the nested loop itself also runs n times.<br>
Therefore, the time complexity for the algorithm is O(n^2).<br>

## example number 4:

<hr>

for(i = 0 ; i < n ; i++){<br>
for(j = 0 ; j < i ; j++){<br>
statement;<br>
}<br>
}<br>

Although it may seem the loops are similar to example number 3, it is not.You can notice that the nested loop has a different condition.
The nested loops run for (n\*(n+1)/2).<br>

## example number 5

<hr>

p = 0;<br>
for(i = 0 ; p < n ; i++){<br>
p = p+i;<br>
}<br>

here the p, which is also halting condition for the loops is being changed in linear fashion.So if the code runs for 'kth' iteration the statement inside the loop runs for (k(k+1)/2) = (k^2+k)/2 times. To express this in terms of n let's suppose k^2 = n i.e k = sqrt(n).<br>

therefore, time complexity of this algorithm = O(sqrt(n)).

## example number 6

<hr>

for(i = 0 ; i < n ; i=i\*2){<br>
statement;<br>
}<br>

here the value of i increases exponentially with each iteration. if it runs for k-1 times the value of i becomes 2^k-1 that means 2^k >= n. that means k = log2n, hence the time complexity = O(logn).<br>

Remember we don't always get integer results for O(logn) in most cases we get floating points, in those cases we take celling value of the float numbers.<br>

## example number 7

<hr>

for(i = 0 ; i < n ; i=i/2){<br>
statement;<br>
}<br>

time complexity = O(logn).

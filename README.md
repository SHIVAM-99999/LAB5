# LAB5
1.cpp : Fractional Knapsack

 Aim-To maximize total profit by selecting items according to profit-to-weight ratio, allowing fractional selection.


Variables Used
- profit[] : Stores profit of each item  
- weight[] : Stores weight of each item  
- ratio[] : Profit per unit weight  
- capacity : Maximum knapsack capacity  
- n : Number of items  
- totalProfit : Final maximum profit  

 Algorithm

Calculate ratio for each item

Sort items in decreasing ratio order

for each item
{
    if weight <= capacity
        take complete item

    else
        take fractional part
         break
}

Complexity
Best Case : O(n log n)
Average Case : O(n log n)
Worst Case : O(n log n)


2.cpp : Convex Hull
Aim-To determine the boundary points forming the convex polygon for a given set of points.

Variables Used
points[] : Set of input coordinates
n : Number of points
hull[] : Stores hull points
p, q : Index positions
orientation : Direction check value

Algorithm
Select leftmost point

repeat
{
    Add current point to hull

    Select next point q

    for every point i
        if orientation(current, i, q) is counterclockwise
            q = i

    current = q
}
until current becomes starting point

Complexity
Best Case : O(nh)
Average Case : O(nh)
Worst Case : O(n²)


3.cpp : Kth Smallest Element
Aim-To find the kth smallest element from an unsorted array.

Variables Used
arr[] : Input array
n : Number of elements
k : Required position
pivot : Partition element
index : Pivot index
Algorithm
Partition array

if pivot index == k-1
    return element

else if pivot index > k-1
    search left part

else
    search right part
    
Complexity
Best Case : O(n)
Average Case : O(n)
Worst Case : O(n²)


4.cpp : MaxMin
Aim-To find the maximum and minimum elements in an array efficiently.

Variables Used
arr[] : Input array
n : Number of elements
max : Largest value
min : Smallest value
i : Loop counter
Algorithm
Initialize max and min

for each element
{
    if element > max
        update max

    if element < min
        update min
}

Complexity
Best Case : O(n)
Average Case : O(n)
Worst Case : O(n)
        

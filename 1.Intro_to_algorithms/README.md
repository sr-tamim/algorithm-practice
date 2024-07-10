# Introduction to Algorithm & Data Structure


### Algorithm

An algorithm is a set of well-defined steps or rules to solve a particular problem.

#### Key Characteristics of an Algorithm:
- Input: Data provided to the algorithm for processing.
- Output: The result produced by the algorithm.
- Definiteness: Each step should be clear and unambiguous.
- Finiteness: The algorithm should terminate after a finite number of steps.
- Effectiveness: Each step should be feasible and computable.

#### Types of Algorithms:
- Search algorithms: Linear search, binary search, etc.
- Sorting algorithms: Bubble sort, insertion sort, merge sort, quick sort, etc.
- Graph algorithms: Dijkstra's algorithm, A* search algorithm, etc.
- Dynamic programming algorithms: Fibonacci sequence, longest common subsequence, etc.
- Greedy algorithms: Fractional knapsack problem, Huffman coding, etc.



### Data Structure 

A data structure is a way of organizing and storing data to facilitate efficient access and modification. It's a container for data, designed to support specific operations.

#### Common data structures:
- Arrays: A collection of elements, accessed by an index.
- Linked lists: A linear data structure where elements are linked together.
- Stacks: A LIFO (Last In, First Out) data structure.
- Queues: A FIFO (First In, First Out) data structure.
- Trees: Hierarchical data structures with a root node and child nodes.
- Graphs: Non-linear data structures representing relationships between nodes.
- Hash tables: Data structures that use a hash function to map keys to values.

#### Relationship between Algorithms and Data Structures:
Algorithms and data structures are closely intertwined. The efficiency of an algorithm often depends on the choice of data structure. For example, searching for an element in an array is faster using a binary search algorithm if the array is sorted.

#### In summary:
- Algorithms provide the logic for solving problems.
- Data structures organize and store data.
- The combination of algorithms and data structures is essential for efficient problem-solving in computer science.


### Time Complexity
Time complexity is a measure of how long an algorithm takes to run as a function of the input size. It's a way to evaluate the efficiency of an algorithm. Instead of measuring the exact execution time in seconds, we focus on how the running time grows as the input size increases.

#### Why is it important?
Understanding time complexity is crucial for:

- Choosing the right algorithm: For large datasets, even small differences in time complexity can lead to significant performance improvements.
- Optimizing code: Identifying bottlenecks and areas for improvement.
- Predicting performance: Estimating how an algorithm will perform with different input sizes.

#### How is it measured?
Time complexity is typically expressed using Big O notation. This notation provides an upper bound on the growth rate of the running time as the input size increases.

#### Common Big O notations:

1. **O** $(1)$: Constant time. The running time is independent of the input size.
2. **O** $(log n)$: Logarithmic time. The running time grows logarithmically with the input size.
3. **O** $(n)$: Linear time. The running time grows linearly with the input size.
4. **O** $(n log n)$: Linearithmic time. A combination of linear and logarithmic growth.
5. **O** $(n^2)$: Quadratic time. The running time grows quadratically with the input size.
6. **O** $(2^n)$: Exponential time. The running time grows exponentially with the input size.

#### Factors affecting time complexity:
- Input size: The number of elements in the input.
- Algorithm efficiency: The number of operations performed.
- Hardware and software: The speed of the computer and the programming language.

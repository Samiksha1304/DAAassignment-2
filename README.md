# DAAassignment-2
# Graph coloring Implementation
### Name - Samiksha Anasane
### Roll no- 18

## Problem Statement: 
Implement Graph coloring algorithm and demonstrate three test cases

## Theory: 

Objective: To minimize the number of colors while coloring a graph.

Graph coloring is the procedure of assigning coloring each vertex of a graph such that no adjacent vertices get same color. 
Graph coloring problem is a NP Complete problem.

## Approach:

Step 1 - Input number of vertices and edges in the graph 

Step 2 − Create vectors to store the data(2d vector for the graph and 1d for the colors).

Step 3 − Choose the first vertex and color it with the first color.

Step 4 − Choose the next vertex and color it with the lowest numbered color that has not been colored on any vertices that are  adjacent to it. If all the adjacent vertices are colored with this color, assign a new color to it. Repeat this step until all the vertices are colored

### Test case 1 : 

Vertices = 4
Edges = 5

 edge no. 1 : 1 2

 edge no. 2 : 2 4

 edge no. 3 : 3 4

 edge no. 4 : 1 3

 edge no. 5 : 1 4

Output: 
Vertex 1 is colored with color 1
Vertex 2 is colored with color 2
Vertex 3 is colored with color 2
Vertex 4 is colored with color 3



### Test case 2 :

Vertices : 5
Edges : 7

 edge no. 1 : 1 2

 edge no. 2 : 2 3

 edge no. 3 : 3 4

 edge no. 4 : 4 1

 edge no. 5 : 2 5

 edge no. 6 : 3 5

 edge no. 7 : 4 5

Vertex 1 is colored with color 1
Vertex 2 is colored with color 2
Vertex 3 is colored with color 1
Vertex 4 is colored with color 2
Vertex 5 is colored with color 3

### Test case 3 :

Vertices : 4
Edges : 6

edge no. 1 : 1 2

edge no. 2 : 2 3

edge no. 3 : 1 3

edge no. 4 : 1 4

edge no. 5 : 2 4

edge no. 6 : 3 4

Vertex 1 is colored with color 1
Vertex 2 is colored with color 2
Vertex 3 is colored with color 3
Vertex 4 is colored with color 4 

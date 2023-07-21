# Learning Binary Tree

## Method of My Madness:
1. Learning how to build a tree
2. Learning how to searh a tree
3. Learning how to add nodes
4. Learning how to delete a node
5. Learning how to optimize the tree
6. Learning how to add a node optimally
7. Learning how to remove a node optimally (including root)
8. Learning how to change the root node

Current Tree for these learning steps

```mermaid
graph TD;
    20-->10;
    20-->35;
    10-->5;
    10-->13;
    5-->7;
```
## Method to calculate all the possible permutations of said tree

This equation originally stumped me.
Trying to figure out what it broke out to took a lot of research and a couple youtube videos 

1. $p$ = Permutations
2. $n_t$ = Total Number of Nodes
3. $n$ = Nodes (Before I knew it was all nodes)

$\huge p = \dfrac{^{2n}{C_n}}{{n_t+1}}$

I eventually figured out that the equation above equals the one below.

$\huge \dfrac{^{2n}{C_n}}{{n_t+1}} = \dfrac{{(2n_t)}!}{{(n_t+1)}!{(n_t)}!}$

# Optimal Binary Search Tree

## Two methods of calculating the optimal Binary Tree

### Method 1:

Use the hight of the search tree

This equation I came up with on my own.. if it exists I havent really seen it anywhere

It is the sum of all the depths of the nodes devided by the total number of nodes + 1 

1. $w$ = Weight
2. $n_d$ = Node Depth
3. $n_f$ = First Node
4. $n_l$ = Last Node
5. $n_t$ = Total Number of Nodes

$\huge w = \dfrac{\sum\limits_{n_f}^{n_l}{n_d}}{n_t+1}$

### Method 2:

#### Node Frequency && Node Depth

You will use the node depth and the search frequency of the node to calculate the optimal weight

## TODO ##
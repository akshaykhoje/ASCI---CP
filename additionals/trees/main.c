// If each node has only 2 branches then it is a binary tree.
// For n nodes, the number of possible trees is given by Catalan number T(n) = C(2n, n)/(n+1)
// no. of trees with maximum height = 2**(n-1)
// degree : maximum children a node in a tree can have
// in strict binary trees, e = i + 1. e-external nodes, i-internal nodes
// In a binary tree, every node can have 0,1 or 2 child.
// Strict binary tree - in a binary tree, a node cannot have 1 child
// n-ary trees : a node cannot have more than n children
// in case an n-ary tree has n-k children max, then it doesn't make it an (n-k) ary tree.
// A struct n-ary tree is the one where each node can have eithe 0 or n children.
/* for strict m-ary trees, if height h is given, then
 min nodes = m*h + 1
 max nodes = (m**(h+1) - 1)/(m-1)
 */
/*  for strict m-ary trees, if nodes n are given, then
  min height h = log((n(m-1)+1)-1, m)
  max height h = (n-1)/m
*/

//         REPRESENTATION OF BINARY TREES 

// when storing binary tree elements in an array, if a node element is at index i, then left child is at index 2*i, and right child at 2*i+1
//parent is at index floor(i/2) if a node is at index i
// when representing linked binary trees with n nodes, there will be (n+1) NULL pointers

// FULL binary tree : A binary tree of height h, with maximum no. of nodes, n = 2**(h+1) - 1
// COMPLETE binary tree : A binary tree when arranged in an array if there are no empty spaces between two elements, then it is a COMPLETE binary array i.e. on each level, elements should be filled from left to right.
// A FULL binary tree is always a COMPLETE binary tree but the reverse may not be true.
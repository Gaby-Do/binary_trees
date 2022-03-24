<img src="https://blog.holbertonschool.com/wp-content/uploads/2020/04/unnamed-2.png" width="170" height="210">

#0x1D. C - Binary_trees

## Lenguage
<img src="https://img.icons8.com/color/50/000000/c-programming.png">

- [Read about C](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/d801279f75de6a982a55d752dfd3632909f720f0.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220324%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220324T125252Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=e2a33ce2d5bfc3fca92f759423257dc7ff69b0f620d0a01814bc329db4d52aea)
- [Read about recursion](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220324%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220324T125336Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=5f14c593c7bfeaccd6f4bafc8bd20d1bc85fc1a92a94e1ccfe2fcee64ac8419c)
- [Read about Big O Notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
- [Read about Binary Trees](https://en.wikipedia.org/wiki/Binary_tree)

## Learning Objetives

- What is a `binary tree`
- What is the difference between a `binary tree`  and a `Binary Search Tree`
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Installation
To use, first download  this repository into your local machine by issuing the following command in your local terminal. 
```
$ git clone https://github.com/Matilop15/binary_trees.git
```

## Usage
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename.c>
```
and execute
```
$ ./a.out
```
or 
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename.c> -o <new_name>
```
and execute 
```
$ ./new_name
```
### Example <img src="https://img.icons8.com/external-bearicons-gradient-bearicons/40/000000/external-Example-miscellany-texts-and-badges-bearicons-gradient-bearicons.png"/>
Compile task #0
```
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
```
Execute program
```
$ ./0-node
```
Expectation
```
 .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
```

## Files <img src="https://img.icons8.com/dusk/40/000000/file--v2.png"/>

- [binary_trees.h](https://github.com/Matilop15/binary_trees/blob/master/binary_trees.h) - Prototypes of all functions

- [0-binary_tree_node.c](https://github.com/Matilop15/binary_trees/blob/master/0-binary_tree_node.c) - Function that creates a binary tree node
- [1-binary_tree_insert_left.c](https://github.com/Matilop15/binary_trees/blob/master/1-binary_tree_insert_left.c) - Function that inserts a node as the left-child of another node
- [2-binary_tree_insert_right.c](https://github.com/Matilop15/binary_trees/blob/master/2-binary_tree_insert_right.c) - Function that inserts a node as the right-child of another node
- [3-binary_tree_delete.c](https://github.com/Matilop15/binary_trees/blob/master/3-binary_tree_delete.c) - Function that deletes an entire binary tree
- [4-binary_tree_is_leaf.c](https://github.com/Matilop15/binary_trees/blob/master/4-binary_tree_is_leaf.c) - Function that checks if a node is a leaf
- [5-binary_tree_is_root.c](https://github.com/Matilop15/binary_trees/blob/master/5-binary_tree_is_root.c) - Function that checks if a given node is a root
- [6-binary_tree_preorder.c](https://github.com/Matilop15/binary_trees/blob/master/6-binary_tree_preorder.c) - Function that goes through a binary tree using pre-order traversal
- [7-binary_tree_inorder.c](https://github.com/Matilop15/binary_trees/blob/master/7-binary_tree_inorder.c) - Function that goes through a binary tree using in-order traversal
- [8-binary_tree_postorder.c](https://github.com/Matilop15/binary_trees/blob/master/8-binary_tree_postorder.c) - Function that goes through a binary tree using post-order traversal
- [9-binary_tree_height.c](https://github.com/Matilop15/binary_trees/blob/master/9-binary_tree_height.c) - Function that measures the height of a binary tree
- [10-binary_tree_depth.c](https://github.com/Matilop15/binary_trees/blob/master/10-binary_tree_depth.c) - Function that measures the depth of a node in a binary tree
- [11-binary_tree_size.c](https://github.com/Matilop15/binary_trees/blob/master/11-binary_tree_size.c) - Function that measures the size of a binary tree
- [12-binary_tree_leaves.c](https://github.com/Matilop15/binary_trees/blob/master/12-binary_tree_leaves.c) - Function that counts the leaves in a binary tree
- [13-binary_tree_nodes.c](https://github.com/Matilop15/binary_trees/blob/master/13-binary_tree_nodes.c) - Function that counts the nodes with at least 1 child in a binary tree
- [14-binary_tree_balance.c](https://github.com/Matilop15/binary_trees/blob/master/14-binary_tree_balance.c) - Function that measures the balance factor of a binary tree
- [15-binary_tree_is_full.c](https://github.com/Matilop15/binary_trees/blob/master/15-binary_tree_is_full.c) - Function that checks if a binary tree is full
- [16-binary_tree_is_perfect.c](https://github.com/Matilop15/binary_trees/blob/master/16-binary_tree_is_perfect.c) - Function that checks if a binary tree is perfect
- [17-binary_tree_sibling.c](https://github.com/Matilop15/binary_trees/blob/master/17-binary_tree_sibling.c) - Function that finds the sibling of a node
- [18-binary_tree_uncle.c](https://github.com/Matilop15/binary_trees/blob/master/18-binary_tree_uncle.c) - Function that finds the uncle of a node
- [101-binary_tree_levelorder.c](https://github.com/Matilop15/binary_trees/blob/master/101-binary_tree_levelorder.c)- Function that goes through a binary tree using level-order traversal
- [115-O](https://github.com/Matilop15/binary_trees/blob/master/115-O) - The average time complexities of those operations on a Binary Search Tree
- [125-O](https://github.com/Matilop15/binary_trees/blob/master/125-O) - the average time complexities of those operations on an AVL Tree 
- [135-O](https://github.com/Matilop15/binary_trees/blob/master/135-O) - The average time complexities of those operations on a Binary Heap 

## Authors
- [Linkedin: Matias López](https://uy.linkedin.com/in/matias-l%C3%B3pez-777796194?trk=people-guest_people_search-card)
- [Linkedin: Gabriela Dominguez](https://www.linkedin.com/in/maria-gabriela-dominguez-bb95b41a6/)


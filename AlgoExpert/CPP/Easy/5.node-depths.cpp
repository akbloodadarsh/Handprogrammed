using namespace std;
class BinaryTree {
public:
 int value;
 BinaryTree *left;
 BinaryTree *right;
 BinaryTree(int value) {
 this->value = value;
 left = NULL;
 right = NULL;
 }
};
struct Level {
 BinaryTree *root;
 int depth;
};
// Average case: when the tree is balanced
// O(n) time | O(h) space - where n is the number of nodes in
// the Binary Tree and h is the height of the Binary Tree
int nodeDepths(BinaryTree *root) {
 int sumOfDepths = 0;
 vector<Level> stack = {{root, 0}};
 while (stack.size() > 0) {
 BinaryTree *node = stack.back().root;
 int depth = stack.back().depth;
 stack.pop_back();
 if (node == NULL)
 continue;
 sumOfDepths += depth;
 stack.push_back(Level{node->left, depth + 1});
 stack.push_back(Level{node->right, depth + 1});
 }
 return sumOfDepths;
}

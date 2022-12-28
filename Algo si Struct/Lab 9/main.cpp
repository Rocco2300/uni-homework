#include <algorithm>
#include <iostream>
#include <string>

struct node
{
    int val;
    node *left, *right;
};

node* createTree()
{
    char c;
    std::cout << "Nod nou?: ";
    std::cin  >> c;

    if (c != 'y' && c != 'Y')
    {
        return nullptr;
    }

    node *res = new node();
    std::cout << "Val radacina: ";
    std::cin  >> res->val;

    std::cout << "\nNodul stang al lui " << res->val << '\n';
    res->left  = createTree();

    std::cout << "\nNodul drept al lui " << res->val << '\n';
    res->right = createTree();

    return res;
}

void printTree(node* node)
{
    if (node == nullptr)
        return;

    std::cout << node->val;
    std::cout << " L: " << ((node->left) ? std::to_string(node->left->val) : "NULL");
    std::cout << " R: " << ((node->right) ? std::to_string(node->right->val) : "NULL");
    std::cout << '\n';

    printTree(node->left);
    printTree(node->right);
}

void printTreePretty(const std::string& prefix, node* node, bool isLeft)
{
    if(node == nullptr)
        return;

    std::cout << prefix;

    std::cout << (isLeft ? "├──" : "└──" );

    std::cout << node->val << std::endl;
    
    printTreePretty( prefix + (isLeft ? "│  " : "   "), node->left, true);
    printTreePretty( prefix + (isLeft ? "│  " : "   "), node->right, false);
}

void printTreePretty(node* node)
{
    printTreePretty("", node, false);    
}

void printInorder(node* root)
{
    if (root == nullptr)
        return;

    printInorder(root->left);

    std::cout << root->val << ' ';

    printInorder(root->right);
}

void printPreorder(node* root)
{
    if (root == nullptr)
        return;
    
    std::cout << root->val << ' ';

    printPreorder(root->left);

    printPreorder(root->right);
}

void printPostorder(node* root)
{
    if (root == nullptr)
        return;
    
    printPostorder(root->left);

    printPostorder(root->right);

    std::cout << root->val << ' ';
}

int findHeight(node* root)
{
    if (root == nullptr)
        return -1;

    int l = findHeight(root->left);
    int r = findHeight(root->right);

    return std::max(l, r) + 1;
}

int findNodeNum(node* root)
{
    if (root == nullptr)
        return 0;

    int l = findNodeNum(root->left);
    int r = findNodeNum(root->right);

    return (l + r) + 1;
}

int findLeafNum(node* root)
{
    if (root == nullptr)
        return 0;

    if (!root->left && !root->right)
        return 1;

    int l = findLeafNum(root->left);
    int r = findLeafNum(root->right);

    return (l + r);
}


int main()
{
    system("chcp 65001");

    node* root;
    root = createTree();

    printTree(root);
    std::cout << '\n';

    printTreePretty(root);
    std::cout << '\n';

    std::cout << "\nInorder: ";
    printInorder(root);
    std::cout << "\nPreorder: ";
    printPreorder(root);
    std::cout << "\nPostorder: ";
    printPostorder(root);
    std::cout << '\n';

    std::cout << "Inaltime: " << findHeight(root) << '\n';
    std::cout << "Numar de noduri: " << findNodeNum(root) << '\n';
    std::cout << "Numar de frunze: " << findLeafNum(root) << '\n';
    return 0;
}
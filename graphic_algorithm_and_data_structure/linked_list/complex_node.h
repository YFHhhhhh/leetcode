struct Node {
  int val;
  Node *next;
  Node *random;

  Node(int val) : val(val), next(nullptr), random(nullptr) {}
};

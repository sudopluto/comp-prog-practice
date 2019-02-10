#include <vector>

using namespace std;

class Node {
  public:
    vector<Node*> neighbors;
    bool isVisited;

    void search() {
      isVisited = true;
      for (auto node : neighbors) {
        if (!node->isVisited) {
          node->search();
        }
      } 
    }

    Node() {
      isVisited = false;
    }

    void addNeighbor(Node* n) {
      neighbors.push_back(n);
    }
    
  
};

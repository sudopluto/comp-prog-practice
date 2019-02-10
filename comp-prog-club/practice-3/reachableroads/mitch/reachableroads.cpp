#include <iostream>
#include <string.h>
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

int main(int argc, char* argv[]) {
  int x;
  cin >> x;

  for (int i = 0; i < x; i++) {
    int acc = 0;
    int y;
    cin >> y;
    vector<Node*> graph;

    for (int j = 0; j < y; j++) {
      Node* n = new Node();
      graph.push_back(n);
    }

    int z;
    cin >> z;

    for (int k = 0; k < z; k++) {
      int a, b;
      cin >> a;
      cin >> b;

      graph.at(a)->addNeighbor(graph.at(b));
      graph.at(b)->addNeighbor(graph.at(a));
    }

    for (auto n : graph) {
      if (!n->isVisited) {
        acc++;
        n->search();
      }
    }

    cout << acc - 1 << endl;
  }

  return 0;
}

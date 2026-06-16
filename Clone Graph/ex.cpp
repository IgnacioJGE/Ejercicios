/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> visited;
    Node* cloneGraph(Node* node) {
        if(node == nullptr) return node;
        if(node->neighbors.size()<1) return new Node(1);
        return  dsf(node);
    }

    //runs the graph and creates a copy and thern returns de copy
    Node* dsf(Node* node){
        if(node==nullptr) return nullptr;
        if(visited.count(node)) return visited[node];
        Node* clone= new Node(node->val);
        visited[node]=clone;
        for(Node* neig :node->neighbors){
            clone->neighbors.push_back(dsf(neig));
        }
        return clone;
    }
};
#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;

void traverse(vector<set<char>> &g) {
    queue<char> q;
    
    q.push(0);
    
    while(!q.empty()) {
        char current = q.front();

        cout << current;

        q.pop();

        for(auto element : g[current]) {
            q.push(element);
        }
    }
}

void generateMap(vector<set<char>> &g) {
    g['.'].insert('\n');
    g['_'].insert('H');
    g['o'].insert('d');
    g['i'].insert('}');
    g['d'].insert('l');
    g['d'].insert('u');
    g['l'].insert('c');
    g['e'].insert('a');
    g['o'].insert('0');
    g['l'].insert('k');
    g[0x0].insert('g');
    g['k'].insert('.');
    g['{'].insert('e');
    g['a'].insert('5');
    g['T'].insert('F');
    g['F'].insert('C');
    g['_'].insert('j');
    g['a'].insert('y');
    g['5'].insert('b');
    g['g'].insert('o');
    g['d'].insert(' ');
    g['_'].insert('Q');
    g['5'].insert('f');
    g['5'].insert('s');
    g['s'].insert('_');
    g['Q'].insert('i');
}

int main() {
    vector<set<char>> g(128);

    generateMap(g);

    traverse(g);

    return 0;
}


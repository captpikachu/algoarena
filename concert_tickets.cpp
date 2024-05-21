#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    for(int i = 0; i < n; i++) {
        int ticket;
        cin >> ticket;
        tickets.insert(ticket);
    }
    for(int i = 0; i < m; i++) {
        int customer;
        cin >> customer;
        auto it = tickets.upper_bound(customer);
        if(it == tickets.begin()) {
            cout << "-1 ";
        }
        else {
            it--;
            cout << *it << " ";
            tickets.erase(it);
        }
    }
    return 0;
}
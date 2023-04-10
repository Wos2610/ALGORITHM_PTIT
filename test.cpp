#include <bits/stdc++.h>
using namespace std;

// Cấu trúc để lưu các cạnh đồ thị
// u, v là 2 đỉnh, c là trọng số cạnh
struct Edge {
    int u, v, c;
    Edge(int _u, int _v, int _c): u(_u), v(_v), c(_c) {};
};

struct Dsu {
    vector<int> par;

    void init(int n) {
        par.resize(n + 5, 0);
        for (int i = 1; i <= n; i++) par[i] = i;
    }

    int find(int u) {
        if (par[u] == u) return u;
        return par[u] = find(par[u]);
    }

    bool join(int u, int v) {
        u = find(u); v = find(v);
        if (u == v) return false;
        par[v] = u;
        return true;
    }
} dsu;

// n và m là số đỉnh và số cạnh
// totalWeight là tổng trọng số các cạnh trong cây khung nhỏ nhất
int n, m, totalWeight = 0;
vector < Edge > edges;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        edges.push_back({u, v, c});
    }

    dsu.init(n);

    // Sắp xếp lại các cạnh theo trọng số tăng dần
    sort(edges.begin(), edges.end(), [](Edge & x, Edge & y) {
        return x.c < y.c;
    });

    // Duyệt qua các cạnh theo thứ tự đã sắp xếp
    for (auto e : edges) {
        // Nếu không hợp nhất được 2 đỉnh u và v thì bỏ qua
        if (!dsu.join(e.u, e.v)) continue;

        // Nếu hợp nhất được u, v ta thêm trọng số cạnh vào kết quả
        totalWeight += e.c;
    }

    // Xuất ra kết quả
    cout << totalWeight << '\n';
}

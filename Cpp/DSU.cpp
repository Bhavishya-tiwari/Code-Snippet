class dsu
{
public:
    vector<int> par;
    vector<int> rank;
    dsu(int n)
    {
        for (int i = 0; i < n; i++)
        {
            par[i] = i;
            rank[i] = 0;
        }
    }
    int findpar(int node)
    {
        if (par[node] == node)
        {
            return node;
        }
        return par[node] = findpar(par[node]);
    }
    void unionNode(int a, int b)
    {
        a = findpar(a);
        b = findpar(b);
        if (rank[a] > rank[b])
        {
            par[b] = a;
        }
        else if (rank[b] > rank[a])
        {
            par[a] = b;
        }
        else if (rank[a] == rank[b])
        {
            par[b] = a;
            rank[a]++;
        }
        return;
    }
};
